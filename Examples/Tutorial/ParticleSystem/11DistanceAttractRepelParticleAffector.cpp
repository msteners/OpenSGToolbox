// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"

// Input
#include "OSGKeyListener.h"

#include "OSGBlendChunk.h"
#include "OSGPointChunk.h"
#include "OSGChunkMaterial.h"
#include "OSGMaterialChunk.h"
#include "OSGParticleSystem.h"
#include "OSGParticleSystemCore.h"
#include "OSGDiscParticleSystemDrawer.h"
#include "OSGDistanceFadeParticleAffector.h"
#include "OSGDistanceAttractRepelParticleAffector.h"


#include "OSGGaussianNormalDistribution1D.h"
#include "OSGCylinderDistribution3D.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerRefPtr TutorialWindow;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

Distribution3DRefPtr createPositionDistribution(void);
Distribution1DRefPtr createLifespanDistribution(void);

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
  public:

    virtual void keyPressed(const KeyEventUnrecPtr e)
    {
        if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
        {
            TutorialWindow->closeWindow();
        }
    }

    virtual void keyReleased(const KeyEventUnrecPtr e)
    {
    }

    virtual void keyTyped(const KeyEventUnrecPtr e)
    {
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventUnrecPtr e)
    {
    }
    virtual void mouseEntered(const MouseEventUnrecPtr e)
    {
    }
    virtual void mouseExited(const MouseEventUnrecPtr e)
    {
    }
    virtual void mousePressed(const MouseEventUnrecPtr e)
    {
        mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
    virtual void mouseReleased(const MouseEventUnrecPtr e)
    {
        mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEventUnrecPtr e)
    {
        mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }

    virtual void mouseDragged(const MouseEventUnrecPtr e)
    {
        mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindow = createNativeWindow();
    TutorialWindow->initWindow();

    TutorialWindow->setDisplayCallback(display);
    TutorialWindow->setReshapeCallback(reshape);

    TutorialKeyListener TheKeyListener;
    TutorialWindow->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindow->addMouseListener(&TheTutorialMouseListener);
    TutorialWindow->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(TutorialWindow);

    BlendChunkRefPtr PSBlendChunk = BlendChunk::create();
    PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
    PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

    //Particle System Material
    MaterialChunkRefPtr PSMaterialChunkChunk = MaterialChunk::create();
    PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
    PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
    PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
    PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);

    ChunkMaterialRefPtr PSMaterial = ChunkMaterial::create();
    PSMaterial->addChunk(PSMaterialChunkChunk);
    PSMaterial->addChunk(PSBlendChunk);

    Distribution3DRefPtr PositionDistribution = createPositionDistribution();

    Pnt3f PositionReturnValue;

    //Particle System
    ParticleSystemRefPtr ExampleParticleSystem = OSG::ParticleSystem::create();
    for(UInt32 i(0) ; i<800 ; ++i)//controls how many particles are created
    {
        if(PositionDistribution != NULL)
        {
            PositionReturnValue = Pnt3f(PositionDistribution->generate());
        }

        ExampleParticleSystem->addParticle(
                                           PositionReturnValue,
                                           Vec3f(0.0f,0.0f,1.0f),
                                           Color4f(1.0,0.0,0.0,1.0), 
                                           Vec3f(10.0,10.0,10.0), 
                                           -1, 
                                           Vec3f(0.0f,0.0f,0.0f), //Velocity
                                           Vec3f(0.0f,0.0f,0.0f)	//acceleration
                                          );
    }
    ExampleParticleSystem->attachUpdateListener(TutorialWindow);

    //Particle System Drawer
    DiscParticleSystemDrawerRefPtr ExampleParticleSystemDrawer = OSG::DiscParticleSystemDrawer::create();
    ExampleParticleSystemDrawer->setSegments(16);
    ExampleParticleSystemDrawer->setCenterAlpha(1.0);
    ExampleParticleSystemDrawer->setEdgeAlpha(0.0);

    //Particle System Node
    ParticleSystemCoreRefPtr ParticleNodeCore = OSG::ParticleSystemCore::create();
    ParticleNodeCore->setSystem(ExampleParticleSystem);
    ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
    ParticleNodeCore->setMaterial(PSMaterial);

    NodeRefPtr ParticleNode = OSG::Node::create();
    ParticleNode->setCore(ParticleNodeCore);


    //AttractionNode
    TransformRefPtr AttractionCore = OSG::Transform::create();
    Matrix AttractTransform;
    AttractTransform.setTranslate(0.0f, 0.0,0.0);

    AttractionCore->setMatrix(AttractTransform);

    NodeRefPtr AttractionNode = OSG::Node::create();
    AttractionNode->setCore(AttractionCore);

    // Make Main Scene Node and add the Torus
    NodeRefPtr scene = OSG::Node::create();
    scene->setCore(OSG::Group::create());
    scene->addChild(ParticleNode);
    scene->addChild(AttractionNode);

    mgr->setRoot(scene);

    // Show the whole Scene
    //mgr->showAll();
    mgr->getNavigator()->set(Pnt3f(0.0,0.0,500.0), Pnt3f(0.0,0.0,0.0), Vec3f(0.0,1.0,0.0));
    mgr->getNavigator()->setMotionFactor(1.0f);
    mgr->getCamera()->setNear(0.1f);
    mgr->getCamera()->setFar(1000.0f);

    DistanceAttractRepelParticleAffectorRefPtr ExampleDistanceAttractRepelParticleAffector = OSG::DistanceAttractRepelParticleAffector::create();

    ExampleDistanceAttractRepelParticleAffector->setMinDistance(0.0);
    ExampleDistanceAttractRepelParticleAffector->setMaxDistance(1000.0);
    ExampleDistanceAttractRepelParticleAffector->setQuadratic(0.0);
    ExampleDistanceAttractRepelParticleAffector->setLinear(100.0);
    ExampleDistanceAttractRepelParticleAffector->setConstant(0.0);
    ExampleDistanceAttractRepelParticleAffector->setParticleSystemNode(ParticleNode);
    ExampleDistanceAttractRepelParticleAffector->setDistanceFromSource(DistanceAttractRepelParticleAffector::DISTANCE_FROM_NODE);
    ExampleDistanceAttractRepelParticleAffector->setDistanceFromNode(AttractionNode);


    ExampleParticleSystem->pushToAffectors(ExampleDistanceAttractRepelParticleAffector);

    //Open Window
    Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
    TutorialWindow->openWindow(WinPos,
                               WinSize,
                               "11DistanceAttractRepelParticleAffector");

    //Enter main Loop
    TutorialWindow->mainLoop();

    osgExit();

    return 0;
}


// Callback functions


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

Distribution3DRefPtr createPositionDistribution(void)
{
    //Cylinder Distribution
    CylinderDistribution3DRefPtr TheCylinderDistribution = CylinderDistribution3D::create();
    TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
    TheCylinderDistribution->setInnerRadius(30.0);
    TheCylinderDistribution->setOuterRadius(100.0);
    TheCylinderDistribution->setMinTheta(0.0);
    TheCylinderDistribution->setMaxTheta(6.283185);
    TheCylinderDistribution->setHeight(400.0);
    TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
    TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);

    return TheCylinderDistribution;
}

Distribution1DRefPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DRefPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    TheLifespanDistribution->setMean(05.0f);
    TheLifespanDistribution->setStandardDeviation(10.0);

    return TheLifespanDistribution;
}
