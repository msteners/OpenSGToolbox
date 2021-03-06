// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"
#include "OSGImageFileHandler.h"

// Input
#include "OSGKeyListener.h"

#include "OSGSimpleParticleTrailGenerator.h"
#include "OSGParticleSystemParticleTrailGenerator.h"
#include "OSGBlendChunk.h"
#include "OSGPointChunk.h"
#include "OSGLineChunk.h"
#include "OSGTextureObjChunk.h"
#include "OSGTextureEnvChunk.h"
#include "OSGChunkMaterial.h"
#include "OSGMaterialChunk.h"
#include "OSGParticleSystem.h"
#include "OSGParticleSystemCore.h"
#include "OSGQuadParticleSystemDrawer.h"
#include "OSGPointParticleSystemDrawer.h"
#include "OSGSineWaveParticleAffector.h"
#include "OSGGravityParticleAffector.h"
#include "OSGVortexParticleAffector.h"
#include "OSGAgeFadeParticleAffector.h"
#include "OSGRateParticleGenerator.h"
#include "OSGBurstParticleGenerator.h"
#include "OSGAgeSizeParticleAffector.h"
#include "OSGDiscDistribution3D.h"
#include "OSGGaussianNormalDistribution1D.h"
#include "OSGLineDistribution3D.h"
#include "OSGSphereDistribution3D.h"
#include "OSGConeDistribution3D.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerRefPtr TutorialWindow;

ParticleSystemRefPtr ExampleParticleSystem;
SineWaveParticleAffectorRefPtr ExampleSWA;
BurstParticleGeneratorRefPtr ExampleBurstGen;
ParticleSystemParticleTrailGeneratorRefPtr ExamplePSTrailGenerator;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

Distribution3DRefPtr createPositionDistribution(void);
Distribution3DRefPtr createVelocityDistribution(void);
Distribution3DRefPtr createNormalDistribution(void);
Distribution1DRefPtr createLifespanDistribution(void);
Distribution3DRefPtr createSizeDistribution(void);
Distribution3DRefPtr createTrailSizeDistribution(void);
Distribution3DRefPtr createColorDistribution(void);

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
        else
        {
            switch(e->getKey())
            {
                case KeyEvent::KEY_R:
                    {

                    }
                    break;
                case KeyEvent::KEY_B:
                    {	// check if the burst generator is null
                        if(ExampleBurstGen == NULL)
                        {
                            ExampleBurstGen = OSG::BurstParticleGenerator::create();
                            ExampleBurstGen->setPositionDistribution(createPositionDistribution());
                            ExampleBurstGen->setBurstAmount(100);
                            ExampleBurstGen->setVelocityDistribution(createVelocityDistribution());
                            ExampleBurstGen->setNormalDistribution(createNormalDistribution());
                            ExampleBurstGen->setLifespanDistribution(createLifespanDistribution());
                            ExampleBurstGen->setSizeDistribution(createSizeDistribution());
                        }
                        // attach the burst generator
                        ExampleParticleSystem->pushToGenerators(ExampleBurstGen);
                    }
                    break;
                case KeyEvent::KEY_P:
                    {	// increase trail resolution
                        ExamplePSTrailGenerator->setTrailResolution(ExamplePSTrailGenerator->getTrailResolution() * 0.70 + 0.0001);
                        std::cout << "Trail Resolution:  " << ExamplePSTrailGenerator->getTrailResolution() << std::endl;
                        break;
                    }
                case KeyEvent::KEY_L:
                    {	// decrease trail resolution
                        ExamplePSTrailGenerator->setTrailResolution(ExamplePSTrailGenerator->getTrailResolution() * 1.25);
                        std::cout << "Trail Resolution:  " << ExamplePSTrailGenerator->getTrailResolution() << std::endl;
                        break;
                    }
                case KeyEvent::KEY_O:
                    {	// increase trail length
                        ExamplePSTrailGenerator->setTrailLength(ExamplePSTrailGenerator->getTrailLength() * 1.25 + 0.1);
                        std::cout << "Trail Length:  " << ExamplePSTrailGenerator->getTrailLength() << std::endl;
                        break;
                    }
                case KeyEvent::KEY_K:
                    {	// decrease trail length
                        ExamplePSTrailGenerator->setTrailLength(ExamplePSTrailGenerator->getTrailLength() * 0.7);
                        std::cout << "Trail Length:  " << ExamplePSTrailGenerator->getTrailLength() << std::endl;
                        break;
                    }
                case KeyEvent::KEY_J:
                    {	// toggle trail length method
                        ExamplePSTrailGenerator->setTrailLengthMethod((ExamplePSTrailGenerator->getTrailLengthMethod() == ParticleTrailGenerator::NUM_POINTS)?
                                                                      (ParticleTrailGenerator::TIME):(ParticleTrailGenerator::NUM_POINTS));
                        std::cout << "Trail Length: " << (ExamplePSTrailGenerator->getTrailLengthMethod() == ParticleTrailGenerator::NUM_POINTS ? "Num Pts":"Time") << std::endl;
                        break;
                    }
                case KeyEvent::KEY_Y:
                    {	// toggle trail spacing method
                        ExamplePSTrailGenerator->setTrailResolutionMethod((ExamplePSTrailGenerator->getTrailResolutionMethod() == ParticleTrailGenerator::TIME_SPACING)?
                                                                          (ParticleTrailGenerator::DISTANCE_SPACING):(ParticleTrailGenerator::TIME_SPACING));
                        std::cout << "Trail resolution: " <<(ExamplePSTrailGenerator->getTrailResolutionMethod() == ParticleTrailGenerator::TIME_SPACING ? "Time Spacing" : "Distance Spacing") << std::endl;
                        break;
                    }
                case KeyEvent::KEY_V:
                    {
                        mgr->getRenderAction()->setVolumeDrawing(!mgr->getRenderAction()->getVolumeDrawing());
                    }
            }
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


    // Material blend chunk
    BlendChunkRefPtr PSBlendChunk = BlendChunk::create();
    PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
    PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

    //load up images for PS drawer
    ImageRefPtr rocket = OSG::ImageFileHandler::the()->read("Data/rocket.png");
    ImageRefPtr smoke = OSG::ImageFileHandler::the()->read("Data/Smokey.png");

    //Texture Chunk
    TextureObjChunkRefPtr PSRocketTexChunk = OSG::TextureObjChunk::create();
    PSRocketTexChunk->setImage(rocket);

    TextureEnvChunkRefPtr PSRocketTexEnvChunk = OSG::TextureEnvChunk::create();
    PSRocketTexEnvChunk->setEnvMode(GL_MODULATE);

    TextureObjChunkRefPtr SmokeTexChunk = OSG::TextureObjChunk::create();
    SmokeTexChunk->setImage(smoke);

    TextureEnvChunkRefPtr SmokeTexEnvChunk = OSG::TextureEnvChunk::create();
    SmokeTexEnvChunk->setEnvMode(GL_MODULATE);

    //Particle System Material
    MaterialChunkRefPtr PSMaterialChunkChunk = MaterialChunk::create();
    PSMaterialChunkChunk->setAmbient(Color4f(1.0f,0.5f,0.3f,1.0f));
    PSMaterialChunkChunk->setDiffuse(Color4f(1.0f,0.5f,0.3f,0.6f));
    PSMaterialChunkChunk->setSpecular(Color4f(1.0f,0.5f,0.3f,0.6f));
    PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);

    // Assembling materials
    ChunkMaterialRefPtr PSMaterial = ChunkMaterial::create();
    PSMaterial->addChunk(PSMaterialChunkChunk);
    PSMaterial->addChunk(PSBlendChunk);
    PSMaterial->addChunk(PSRocketTexChunk);

    ChunkMaterialRefPtr TrailMaterial = ChunkMaterial::create();
    TrailMaterial->addChunk(PSMaterialChunkChunk);
    TrailMaterial->addChunk(PSBlendChunk);
    TrailMaterial->addChunk(SmokeTexChunk);

    AgeFadeParticleAffectorRefPtr AgeFadeAffector = OSG::AgeFadeParticleAffector::create();
    AgeFadeAffector->setFadeInTime(0.0f);
    AgeFadeAffector->setStartAlpha(1.0f);
    AgeFadeAffector->setEndAlpha(0.0f);
    AgeFadeAffector->setFadeOutTime(0.35f);
    AgeFadeAffector->setFadeToAlpha(1.0f);

    // Creating a particle generator
    RateParticleGeneratorRefPtr ExampleGenerator = OSG::RateParticleGenerator::create();
    //Attach the function objects to the Generator
    ExampleGenerator->setPositionDistribution(createPositionDistribution());
    ExampleGenerator->setGenerationRate(3.0);
    ExampleGenerator->setVelocityDistribution(createVelocityDistribution());
    ExampleGenerator->setNormalDistribution(createNormalDistribution());
    ExampleGenerator->setLifespanDistribution(createLifespanDistribution());
    ExampleGenerator->setSizeDistribution(createSizeDistribution());


    //Creating Particle System
    ExampleParticleSystem = OSG::ParticleSystem::create();
    ExampleParticleSystem->addParticle(OSG::Pnt3f(0,0,-100),OSG::Vec3f(0,1,0),OSG::Color4f(1,1,1,1),OSG::Vec3f(1,1,1),0.1,OSG::Vec3f(0,0,0),OSG::Vec3f(0,0,0));
    ExampleParticleSystem->addParticle(OSG::Pnt3f(0,0,100),OSG::Vec3f(0,1,0),OSG::Color4f(1,1,1,1),OSG::Vec3f(1,1,1),0.1,OSG::Vec3f(0,0,0),OSG::Vec3f(0,0,0));
    ExampleParticleSystem->setMaxParticles(5); // 5 rockets max to avoid collisions.  they are bad.
    ExampleParticleSystem->pushToAffectors(AgeFadeAffector);
    ExampleParticleSystem->attachUpdateListener(TutorialWindow); 

    //Creating Particle System Drawer
    QuadParticleSystemDrawerRefPtr ExampleParticleSystemDrawer = OSG::QuadParticleSystemDrawer::create();
    ExampleParticleSystemDrawer->setNormalAndUpSource(QuadParticleSystemDrawer::NORMAL_VIEW_DIRECTION,
                                                      QuadParticleSystemDrawer::UP_VELOCITY);

    QuadParticleSystemDrawerRefPtr ExampleTrailDrawer = OSG::QuadParticleSystemDrawer::create();
    ExampleTrailDrawer->setNormalAndUpSource(QuadParticleSystemDrawer::NORMAL_VIEW_DIRECTION,
                                             QuadParticleSystemDrawer::UP_PARTICLE_NORMAL);

    // Attaching affector and generator to the particle system
    ExampleParticleSystem->pushToGenerators(ExampleGenerator);

    //Particle System Core, setting its system, drawer, and material
    ParticleSystemCoreRefPtr ParticleNodeCore = OSG::ParticleSystemCore::create();
    ParticleNodeCore->setSystem(ExampleParticleSystem);
    ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
    ParticleNodeCore->setMaterial(PSMaterial);

    // create Particle System Particle Trail generator
    ExamplePSTrailGenerator = OSG::ParticleSystemParticleTrailGenerator::create();
    ExamplePSTrailGenerator->setTrailResolution(0.05f);
    ExamplePSTrailGenerator->setTrailLength(1.2);
    ExamplePSTrailGenerator->setTrailLengthMethod(ParticleTrailGenerator::TIME);
    ExamplePSTrailGenerator->setTrailResolutionMethod(ParticleTrailGenerator::TIME_SPACING);
    ExamplePSTrailGenerator->setTrailMaterial(TrailMaterial);
    ExamplePSTrailGenerator->setTrailDrawer(ExampleTrailDrawer);
    ExamplePSTrailGenerator->setSizeDistribution(createTrailSizeDistribution());
    ExamplePSTrailGenerator->setColorDistribution(createColorDistribution());
    ExamplePSTrailGenerator->setNormalDistribution(createNormalDistribution());
    ExamplePSTrailGenerator->setVelocityDistribution(createNormalDistribution());

    // create affectors for particle trails
    GravityParticleAffectorRefPtr GravAffector = OSG::GravityParticleAffector::create();
    GravAffector->setBeacon(ExamplePSTrailGenerator);

    AgeFadeParticleAffectorRefPtr TrailAgeFadeAffector = OSG::AgeFadeParticleAffector::create();
    TrailAgeFadeAffector->setFadeInTime(0.2f);
    TrailAgeFadeAffector->setStartAlpha(0.0f);
    TrailAgeFadeAffector->setEndAlpha(0.0f);
    TrailAgeFadeAffector->setFadeOutTime(1.0f);
    TrailAgeFadeAffector->setFadeToAlpha(0.6f);

    // now we attach the affector to the particle trail generator's particle system
    ExamplePSTrailGenerator->getParticleSystem()->pushToAffectors(TrailAgeFadeAffector);


    // attach listener for trail generator to the particle system
    ExampleParticleSystem->addParticleSystemListener(ExamplePSTrailGenerator->getParticleSystemListener());

    //Attach the the update producer to the particle system particle trail generator. 
    ExamplePSTrailGenerator->attachUpdateProducer(TutorialWindow->editEventProducer());

    // Set up node with the particle system at its core
    NodeRefPtr ParticleNode = OSG::Node::create();
    ParticleNode->setCore(ParticleNodeCore);
    ParticleNode->addChild(ExamplePSTrailGenerator);

    // Make Main Scene Node
    NodeRefPtr scene = OSG::Node::create();
    scene->setCore(OSG::Group::create());
    scene->addChild(ParticleNode);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();
    mgr->getCamera()->setFar(10000.0f);
    mgr->getCamera()->setNear(0.1f);
    mgr->setStatistics(false);

    //Open Window
    Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
    TutorialWindow->openWindow(WinPos,
                               WinSize,
                               "02ParticleSystemParticleTrail");

    std::cout << "Controls: " << std::endl
        << "P: Increase Trail Resolution" << std::endl
        << "L: Decrease Trail Resolution" << std::endl
        << "O: Increase Trail Length" << std::endl
        << "K: Decrease Trail Length" << std::endl
        << "J: Toggle calculating trail length by num points/time" << std::endl
        << "Y: Toggle calculating trail point spacing by time/distance" << std::endl
        << "B: Particle burst" << std::endl;

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
    DiscDistribution3DRefPtr TheDiscDistribution = OSG::DiscDistribution3D::create();
    TheDiscDistribution->setOuterRadius(0.0);
    TheDiscDistribution->setSurfaceOrEdge(DiscDistribution3D::EDGE);

    return TheDiscDistribution;
}

Distribution3DRefPtr createVelocityDistribution(void)
{
    //Cone Dist. in a "fountain" pointing up
    ConeDistribution3DRefPtr TheConeDistribution = OSG::ConeDistribution3D::create();
    TheConeDistribution->setDirection(Vec3f(0.0,1.0,0.0));
    TheConeDistribution->setMin(15.0);
    TheConeDistribution->setMax(20.0);
    TheConeDistribution->setSpread(2.6);

    return TheConeDistribution;
}

Distribution3DRefPtr createNormalDistribution(void)
{
    SphereDistribution3DRefPtr TheSphereDistribution = SphereDistribution3D::create();
    TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
    TheSphereDistribution->setInnerRadius(1.0);
    TheSphereDistribution->setOuterRadius(1.0);
    TheSphereDistribution->setMinTheta(-3.141950);
    TheSphereDistribution->setMaxTheta(3.141950);
    TheSphereDistribution->setMinZ(-1.0);
    TheSphereDistribution->setMaxZ(1.0);
    TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);

    return TheSphereDistribution;
}

Distribution1DRefPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DRefPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    TheLifespanDistribution->setMean(3.0f);
    TheLifespanDistribution->setStandardDeviation(1.0);

    return TheLifespanDistribution;
}

Distribution3DRefPtr createSizeDistribution(void)
{
    //Line Distribution
    LineDistribution3DRefPtr TheLineDistribution = LineDistribution3D::create();
    TheLineDistribution->setPoint1(Pnt3f(4.45,4.45,4.45));
    TheLineDistribution->setPoint2(Pnt3f(4.45,4.45,4.45));

    return TheLineDistribution;
}

Distribution3DRefPtr createTrailSizeDistribution(void)
{
    //Line Distribution
    LineDistribution3DRefPtr TheLineDistribution = LineDistribution3D::create();
    TheLineDistribution->setPoint1(Pnt3f(2.0,2.0,2.0));
    TheLineDistribution->setPoint2(Pnt3f(2.5,2.5,2.5));

    return TheLineDistribution;
}

Distribution3DRefPtr createColorDistribution(void)
{
    LineDistribution3DRefPtr TheLineDistribution = LineDistribution3D::create();
    TheLineDistribution->setPoint1(Pnt3f(0.5,0.5,0.5));
    TheLineDistribution->setPoint2(Pnt3f(1.0,1.0,1.0));

    return TheLineDistribution;
}
