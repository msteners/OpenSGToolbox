// OpenSG Tutorial Example: Hello World
//
// Minimalistic OpenSG program
// 
// This is the shortest useful OpenSG program 
// (if you remove all the comments ;)
//
// It shows how to use OpenSG together with GLUT to create a little
// interactive rootNode viewer.
//

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// A little helper to simplify rootNode management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>

#include <OpenSG/OSGSimpleMaterial.h>

#include <OpenSG/OSGComponentTransform.h>
#include <OpenSG/OSGTransform.h>
#include <OpenSG/OSGTypeFactory.h>
#include <OpenSG/OSGSimpleStatisticsForeground.h>
#include <OpenSG/OSGFieldFactory.h>

#include <OpenSG/OSGFieldContainerFactory.h>
#include <OpenSG/OSGSimpleAttachments.h>
#include <OpenSG/OSGSceneFileHandler.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowUtils.h>

//Physics
#include <OpenSG/Physics/OSGPhysics.h>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE


// forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);
PhysicsBodyPtr buildSphere(void);
PhysicsBodyPtr buildBox(void);
void makeExplosion(Pnt3f Location, Real32 Force);

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

PhysicsHandlerPtr physHandler;
PhysicsWorldPtr physicsWorld;
PhysicsSpacePtr physicsSpace;

//just for hierarchy
NodePtr spaceGroupNode;
std::vector<PhysicsBodyPtr> allPhysicsBodies;

NodePtr rootNode;

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           TutorialWindowEventProducer->closeWindow();
       }
       switch(e->getKey())
       {
       case KeyEvent::KEY_S:
            {
                allPhysicsBodies.push_back(buildSphere());
            }
            break;
       case KeyEvent::KEY_B:
            {
                allPhysicsBodies.push_back(buildBox());
            }
            break;
       case KeyEvent::KEY_E:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 1280.0f);
           break;
       case KeyEvent::KEY_1:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 20.0f);
           break;
       case KeyEvent::KEY_2:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 80.0f);
           break;
       case KeyEvent::KEY_3:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 320.0f);
           break;
       case KeyEvent::KEY_4:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 1280.0f);
           break;
       case KeyEvent::KEY_5:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 5120.0f);
           break;
       case KeyEvent::KEY_6:
           makeExplosion(Pnt3f(0.0f,0.0f,-5.0f), 20480.0f);
           break;
       }
   }

   virtual void keyReleased(const KeyEventPtr e)
   {
   }

   virtual void keyTyped(const KeyEventPtr e)
   {
   }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventPtr e)
    {
    }
    virtual void mouseEntered(const MouseEventPtr e)
    {
    }
    virtual void mouseExited(const MouseEventPtr e)
    {
    }
    virtual void mousePressed(const MouseEventPtr e)
    {
            mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
    virtual void mouseReleased(const MouseEventPtr e)
    {
           mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }

    virtual void mouseDragged(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }
};

void makeExplosion(Pnt3f Location, Real32 Impulse)
{
    for(UInt32 i(0) ; i<allPhysicsBodies.size() ; ++i)
    {
        Vec3f Direction(allPhysicsBodies[i]->getPosition()-Location);

        Real32 Distance(Direction.length());
        Direction.normalize();

        allPhysicsBodies[i]->addForce(physicsWorld->impulseToForce(physHandler->getStepSize(), Direction*Impulse*(1.0f/Distance)));
        //The bodies need to be enabled because they may be auto-disabled when they
        //come to rest
        //The bodies are not re-enabled untill a new collision is detected
        allPhysicsBodies[i]->setEnable(true);
    }
}

// Initialize GLUT & OpenSG and set up the rootNode
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

	
    // Tell the Manager what to manage
    mgr->setWindow(TutorialWindowEventProducer->getWindow());

    //Make Torus Node
    NodePtr TorusNode = makeTorus(.5, 2, 32, 32);

    //Make Main Scene Node
	NodePtr scene = makeCoredNode<Group>();
    setName(scene, "scene");
    rootNode = Node::create();
    setName(rootNode, "rootNode");
    ComponentTransformPtr Trans;
    Trans = ComponentTransform::create();
    beginEditCP(rootNode, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        rootNode->setCore(Trans);
 
        // add the torus as a child
        rootNode->addChild(scene);
    }
    endEditCP  (rootNode, Node::CoreFieldMask | Node::ChildrenFieldMask);

    //Setup Physics Scene
    physicsWorld = PhysicsWorld::create();
    beginEditCP(physicsWorld, PhysicsWorld::WorldContactSurfaceLayerFieldMask | 
                              PhysicsWorld::AutoDisableFlagFieldMask | 
                              PhysicsWorld::AutoDisableTimeFieldMask | 
                              PhysicsWorld::WorldContactMaxCorrectingVelFieldMask | 
                              PhysicsWorld::GravityFieldMask);
        physicsWorld->setWorldContactSurfaceLayer(0.005);
        physicsWorld->setAutoDisableFlag(1);
        physicsWorld->setAutoDisableTime(0.75);
        physicsWorld->setWorldContactMaxCorrectingVel(100.0);
        physicsWorld->setGravity(Vec3f(0.0, 0.0, -9.81));
    endEditCP(physicsWorld, PhysicsWorld::WorldContactSurfaceLayerFieldMask | 
                              PhysicsWorld::AutoDisableFlagFieldMask | 
                              PhysicsWorld::AutoDisableTimeFieldMask | 
                              PhysicsWorld::WorldContactMaxCorrectingVelFieldMask | 
                              PhysicsWorld::GravityFieldMask);

    //physicsSpace = PhysicsSimpleSpace::create();
    //physicsSpace = PhysicsQuadTreeSpace::create();
    //physicsSpace = PhysicsHashSpace::create();
    physicsSpace = PhysicsSweepAndPruneSpace::create();

    CollisionContactParametersPtr DefaultCollisionParams = CollisionContactParameters::createEmpty();
    beginEditCP(DefaultCollisionParams);
        DefaultCollisionParams->setMode(dContactApprox1 | dContactBounce);
        DefaultCollisionParams->setMu(0.3);
        DefaultCollisionParams->setMu2(0.0);
        DefaultCollisionParams->setBounce(0.2);
        DefaultCollisionParams->setBounceSpeedThreshold(0.1);
        DefaultCollisionParams->setSoftCFM(0.1);
        DefaultCollisionParams->setSoftERP(0.2);
        DefaultCollisionParams->setMotion1(0.0);
        DefaultCollisionParams->setMotion2(0.0);
        DefaultCollisionParams->setMotionN(0.0);
        DefaultCollisionParams->setSlip1(0.0);
        DefaultCollisionParams->setSlip2(0.0);
    endEditCP(DefaultCollisionParams);

    beginEditCP(physicsSpace, PhysicsSpace::DefaultCollisionParametersFieldMask);
        physicsSpace->setDefaultCollisionParameters(DefaultCollisionParams);
    endEditCP(physicsSpace, PhysicsSpace::DefaultCollisionParametersFieldMask);

    physHandler = PhysicsHandler::create();
    beginEditCP(physHandler, PhysicsHandler::WorldFieldMask | PhysicsHandler::SpacesFieldMask | PhysicsHandler::StepSizeFieldMask | PhysicsHandler::UpdateNodeFieldMask);
        physHandler->setWorld(physicsWorld);
        physHandler->getSpaces().push_back(physicsSpace);
        physHandler->setUpdateNode(rootNode);
    endEditCP(physHandler, PhysicsHandler::WorldFieldMask | PhysicsHandler::SpacesFieldMask | PhysicsHandler::StepSizeFieldMask | PhysicsHandler::UpdateNodeFieldMask);
    physHandler->attachUpdateProducer(TutorialWindowEventProducer->editEventProducer());
    

    beginEditCP(rootNode, Node::AttachmentsFieldMask);
        rootNode->addAttachment(physHandler);    
        rootNode->addAttachment(physicsWorld);
        rootNode->addAttachment(physicsSpace);
    endEditCP(rootNode, Node::AttachmentsFieldMask);


	/************************************************************************/
	/* create spaces, geoms and bodys                                                                     */
	/************************************************************************/
    //create a group for our space
    GroupPtr spaceGroup;
	spaceGroupNode = makeCoredNode<Group>(&spaceGroup);
    //create the ground plane
    GeometryPtr plane;
	NodePtr planeNode = makeBox(30.0, 30.0, 1.0, 1, 1, 1);
    plane = GeometryPtr::dcast(planeNode->getCore());
    //and its Material
	SimpleMaterialPtr plane_mat = SimpleMaterial::create();
	beginEditCP(plane_mat);
		plane_mat->setAmbient(Color3f(0.7,0.7,0.7));
		plane_mat->setDiffuse(Color3f(0.9,0.6,1.0));
	endEditCP(plane_mat);
    beginEditCP(plane, Geometry::MaterialFieldMask);
	    plane->setMaterial(plane_mat);
    endEditCP(plane);


    //create Physical Attachments
	PhysicsBoxGeomPtr planeGeom = PhysicsBoxGeom::create();
    beginEditCP(planeGeom, PhysicsBoxGeom::LengthsFieldMask | PhysicsBoxGeom::SpaceFieldMask);
        planeGeom->setLengths(Vec3f(30.0, 30.0, 1.0));
        //add geoms to space for collision
        planeGeom->setSpace(physicsSpace);
    endEditCP(planeGeom, PhysicsBoxGeom::LengthsFieldMask | PhysicsBoxGeom::SpaceFieldMask);

	//add Attachments to nodes...
    beginEditCP(spaceGroupNode, Node::AttachmentsFieldMask | Node::ChildrenFieldMask);
	    spaceGroupNode->addAttachment(physicsSpace);
        spaceGroupNode->addChild(planeNode);
    endEditCP(spaceGroupNode, Node::AttachmentsFieldMask | Node::ChildrenFieldMask);

    beginEditCP(planeNode, Node::AttachmentsFieldMask);
        planeNode->addAttachment(planeGeom);
    endEditCP(planeNode, Node::AttachmentsFieldMask);
    
	beginEditCP(scene, Node::ChildrenFieldMask);
	    scene->addChild(spaceGroupNode);
	endEditCP(scene, Node::ChildrenFieldMask);

    //Create Statistics Foreground
    SimpleStatisticsForegroundPtr PhysicsStatForeground = SimpleStatisticsForeground::create();
    beginEditCP(PhysicsStatForeground);
        PhysicsStatForeground->setSize(25);
        PhysicsStatForeground->setColor(Color4f(0,1,0,0.7));
        PhysicsStatForeground->addElement(PhysicsHandler::statPhysicsTime, 
            "Physics time: %.3f s");
        PhysicsStatForeground->addElement(PhysicsHandler::statCollisionTime, 
            "Collision time: %.3f s");
        PhysicsStatForeground->addElement(PhysicsHandler::statSimulationTime, 
            "Simulation time: %.3f s");
        PhysicsStatForeground->addElement(PhysicsHandler::statNCollisions, 
            "%d collisions");
        PhysicsStatForeground->addElement(PhysicsHandler::statNCollisionTests, 
            "%d collision tests");
        PhysicsStatForeground->addElement(PhysicsHandler::statNPhysicsSteps, 
            "%d simulation steps per frame");
    endEditCP(PhysicsStatForeground);

    // tell the manager what to manage
    mgr->setRoot  (rootNode);

    beginEditCP(mgr->getWindow()->getPort(0), Viewport::ForegroundsFieldMask);
        mgr->getWindow()->getPort(0)->getForegrounds().push_back(PhysicsStatForeground);
    endEditCP(mgr->getWindow()->getPort(0), Viewport::ForegroundsFieldMask);
    physHandler->setStatistics(&PhysicsStatForeground->getCollector());

    // show the whole rootNode
    mgr->showAll();
    
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "05Explosion");

    //Enter main Loop
    TutorialWindowEventProducer->mainLoop();

    osgExit();

    return 0;
}

// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}


//////////////////////////////////////////////////////////////////////////
//! build a box
//////////////////////////////////////////////////////////////////////////
PhysicsBodyPtr buildBox(void)
{
    Vec3f Lengths((Real32)(rand()%2)+1.0, (Real32)(rand()%2)+1.0, (Real32)(rand()%2)+1.0);
    Matrix m;
    //create OpenSG mesh
    GeometryPtr box;
    NodePtr boxNode = makeBox(Lengths.x(), Lengths.y(), Lengths.z(), 1, 1, 1);
    box = GeometryPtr::dcast(boxNode->getCore());
    SimpleMaterialPtr box_mat = SimpleMaterial::create();
    beginEditCP(box_mat);
        box_mat->setAmbient(Color3f(0.0,0.0,0.0));
        box_mat->setDiffuse(Color3f(0.0,1.0 ,0.0));
    endEditCP(box_mat);
    beginEditCP(box, Geometry::MaterialFieldMask);
        box->setMaterial(box_mat);
    endEditCP(box, Geometry::MaterialFieldMask);
    TransformPtr boxTrans;
    NodePtr boxTransNode = makeCoredNode<Transform>(&boxTrans);
    m.setIdentity();
    Real32 randX = (Real32)(rand()%10)-5.0;
    Real32 randY = (Real32)(rand()%10)-5.0;
    m.setTranslate(randX, randY, 10.0);
    beginEditCP(boxTrans, Transform::MatrixFieldMask);
        boxTrans->setMatrix(m);
    endEditCP(boxTrans, Transform::MatrixFieldMask);

    //create ODE data
    PhysicsBodyPtr boxBody = PhysicsBody::create(physicsWorld);
    beginEditCP(boxBody, PhysicsBody::PositionFieldMask);
        boxBody->setPosition(Vec3f(randX, randY, 10.0));
    endEditCP(boxBody, PhysicsBody::PositionFieldMask);
    boxBody->setBoxMass(1.0, Lengths.x(), Lengths.y(), Lengths.z());

    PhysicsBoxGeomPtr boxGeom = PhysicsBoxGeom::create();
    beginEditCP(boxGeom, PhysicsBoxGeom::BodyFieldMask | PhysicsBoxGeom::SpaceFieldMask  | PhysicsBoxGeom::LengthsFieldMask);
        boxGeom->setBody(boxBody);
        boxGeom->setSpace(physicsSpace);
        boxGeom->setLengths(Lengths);
    endEditCP(boxGeom, PhysicsBoxGeom::BodyFieldMask | PhysicsBoxGeom::SpaceFieldMask | PhysicsBoxGeom::LengthsFieldMask);

    //add attachments
    beginEditCP(boxNode, Node::AttachmentsFieldMask);
        boxNode->addAttachment(boxGeom);
    endEditCP(boxNode, Node::AttachmentsFieldMask);
    beginEditCP(boxTransNode, Node::AttachmentsFieldMask | Node::ChildrenFieldMask);
        boxTransNode->addAttachment(boxBody);
        boxTransNode->addChild(boxNode);
    endEditCP(boxTransNode, Node::AttachmentsFieldMask | Node::ChildrenFieldMask);

    //add to SceneGraph
    beginEditCP(spaceGroupNode, Node::ChildrenFieldMask);
        spaceGroupNode->addChild(boxTransNode);
    endEditCP(spaceGroupNode, Node::ChildrenFieldMask);

    return boxBody;
}

//////////////////////////////////////////////////////////////////////////
//! build a sphere
//////////////////////////////////////////////////////////////////////////
PhysicsBodyPtr buildSphere(void)
{
    Real32 Radius((Real32)(rand()%2)*0.5+0.5);
    Matrix m;
    //create OpenSG mesh
    GeometryPtr sphere;
    NodePtr sphereNode = makeSphere(2, Radius);
    sphere = GeometryPtr::dcast(sphereNode->getCore());
    SimpleMaterialPtr sphere_mat = SimpleMaterial::create();
    beginEditCP(sphere_mat);
    sphere_mat->setAmbient(Color3f(0.0,0.0,0.0));
    sphere_mat->setDiffuse(Color3f(0.0,0.0,1.0));
    endEditCP(sphere_mat);
    beginEditCP(sphere, Geometry::MaterialFieldMask);
    sphere->setMaterial(sphere_mat);
    endEditCP(sphere);
    TransformPtr sphereTrans;
    NodePtr sphereTransNode = makeCoredNode<Transform>(&sphereTrans);
    m.setIdentity();
    Real32 randX = (Real32)(rand()%10)-5.0;
    Real32 randY = (Real32)(rand()%10)-5.0;
    m.setTranslate(randX, randY, 10.0);
    beginEditCP(sphereTrans, Transform::MatrixFieldMask);
    sphereTrans->setMatrix(m);
    endEditCP(sphereTrans);
    //create ODE data
    PhysicsBodyPtr sphereBody = PhysicsBody::create(physicsWorld);
    beginEditCP(sphereBody, PhysicsBody::PositionFieldMask | PhysicsBody::LinearDampingFieldMask | PhysicsBody::AngularDampingFieldMask);
        sphereBody->setPosition(Vec3f(randX, randY, 10.0));
        sphereBody->setLinearDamping(0.0001);
        sphereBody->setAngularDamping(0.0001);
    endEditCP(sphereBody, PhysicsBody::PositionFieldMask | PhysicsBody::LinearDampingFieldMask | PhysicsBody::AngularDampingFieldMask);
    sphereBody->setSphereMass(1.0,Radius);

    PhysicsSphereGeomPtr sphereGeom = PhysicsSphereGeom::create();
    beginEditCP(sphereGeom, PhysicsSphereGeom::BodyFieldMask | PhysicsSphereGeom::SpaceFieldMask | PhysicsSphereGeom::RadiusFieldMask);
        sphereGeom->setBody(sphereBody);
        sphereGeom->setSpace(physicsSpace);
        sphereGeom->setRadius(Radius);
    endEditCP(sphereGeom, PhysicsSphereGeom::BodyFieldMask | PhysicsSphereGeom::SpaceFieldMask | PhysicsSphereGeom::RadiusFieldMask);
    
    //add attachments
    beginEditCP(sphereNode, Node::AttachmentsFieldMask);
    sphereNode->addAttachment(sphereGeom);
    endEditCP(sphereNode);
    beginEditCP(sphereTransNode, Node::AttachmentsFieldMask | Node::ChildrenFieldMask);
    sphereTransNode->addAttachment(sphereBody);
    sphereTransNode->addChild(sphereNode);
    endEditCP(sphereTransNode);
    //add to SceneGraph
    beginEditCP(spaceGroupNode, Node::ChildrenFieldMask);
    spaceGroupNode->addChild(sphereTransNode);
    endEditCP(spaceGroupNode);

    return sphereBody;
}
