// 
// OpenSGToolbox Tutorial: 02TransformAnimation
//
// Demonstrates a simple animation using transformation keyframes. 
//


// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// Methods to create simple geometry: boxes, spheres, tori etc.
#include "OSGSimpleGeometry.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"

#include "OSGSimpleMaterial.h"

#include "OSGComponentTransform.h"
#include "OSGTransform.h"
#include "OSGTypeFactory.h"

#include "OSGFieldContainerFactory.h"
#include "OSGNameAttachment.h"

#include "OSGContainerUtils.h"
#include "OSGMTRefCountPtr.h"

// Input
#include "OSGWindowUtils.h"
#include "OSGWindowEventProducer.h"
#include "OSGKeyListener.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGTransformAnimator.h"
#include "OSGFieldAnimation.h"

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE


// forward declaration so we can have the interesting stuff upfront
void setupAnimation(void);
void display(void);
void reshape(Vec2f Size);

class TutorialAnimationListener : public AnimationListener
{
public:
   virtual void animationStarted(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Started"  << std::endl;
   }

   virtual void animationStopped(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Stopped"  << std::endl;
   }

   virtual void animationPaused(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Paused"  << std::endl;
   }

   virtual void animationUnpaused(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Unpaused"  << std::endl;
   }

   virtual void animationEnded(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Ended"  << std::endl;
   }

   virtual void animationCycled(const AnimationEventUnrecPtr e)
   {
       std::cout << "Animation Cycled.  Cycle Count: " << dynamic_cast<Animation*>(e->getSource())->getCycles() << std::endl;
   }

};

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerUnrecPtr TutorialWindow;

Time TimeLastIdle;
FieldAnimationUnrecPtr TheAnimation;
TutorialAnimationListener TheAnimationListener;
MaterialUnrecPtr TheTorusMaterial;
ComponentTransformUnrecPtr Trans;
TransformUnrecPtr TorusNodeTrans;

// Create a class to allow for the use of the keyboard shortucts 
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventUnrecPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_COMMAND)
       {
           TutorialWindow->closeWindow();
       }

       switch(e->getKey())
       {
       case KeyEvent::KEY_SPACE:
           TheAnimation->pause(!TheAnimation->isPaused());
           break;
       case KeyEvent::KEY_ENTER:
           TheAnimation->attachUpdateProducer(TutorialWindow->editEventProducer());
           TheAnimation->start();
           break;
       case KeyEvent::KEY_1:
                dynamic_pointer_cast<FieldAnimation>(TheAnimation)->setInterpolationType(Animator::STEP_INTERPOLATION);
           break;
       case KeyEvent::KEY_2:
                dynamic_pointer_cast<FieldAnimation>(TheAnimation)->setInterpolationType(Animator::LINEAR_INTERPOLATION);
           break;
       case KeyEvent::KEY_3:
                dynamic_pointer_cast<FieldAnimation>(TheAnimation)->setInterpolationType(Animator::CUBIC_INTERPOLATION);
           break;
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

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {

    // Set up Window
    TutorialWindow = createNativeWindow();

    TutorialWindow->setDisplayCallback(display);
    TutorialWindow->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialKeyListener TheKeyListener;
    TutorialWindow->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindow->addMouseListener(&TheTutorialMouseListener);
    TutorialWindow->addMouseMotionListener(&TheTutorialMouseMotionListener);

    //Initialize Window
    TutorialWindow->initWindow();
    
    //Torus Material
    TheTorusMaterial = SimpleMaterial::create();
    dynamic_pointer_cast<SimpleMaterial>(TheTorusMaterial)->setAmbient(Color3f(0.2,0.2,0.2));
    dynamic_pointer_cast<SimpleMaterial>(TheTorusMaterial)->setDiffuse(Color3f(0.7,0.7,0.7));
    dynamic_pointer_cast<SimpleMaterial>(TheTorusMaterial)->setSpecular(Color3f(0.7,0.7,0.7));
    dynamic_pointer_cast<SimpleMaterial>(TheTorusMaterial)->setShininess(100.0f);

    //Torus Geometry
    GeometryRefPtr TorusGeometry = makeTorusGeo(.5, 2, 32, 32);
    TorusGeometry->setMaterial(TheTorusMaterial);
    
    NodeRefPtr TorusGeometryNode = Node::create();
    TorusGeometryNode->setCore(TorusGeometry);

    //Make Torus Node
    NodeRefPtr TorusNode = Node::create();
    TorusNodeTrans = Transform::create();
    setName(TorusNodeTrans, std::string("TorusNodeTransformationCore"));

    TorusNode->setCore(TorusNodeTrans);
    TorusNode->addChild(TorusGeometryNode);

    //Make Main Scene Node
    NodeRefPtr scene = Node::create();
    Trans = ComponentTransform::create();
    setName(Trans, std::string("MainTransformationCore"));

    scene->setCore(Trans);
    scene->addChild(TorusNode);

    setupAnimation();

    commitChanges();

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(TutorialWindow);

    // tell the manager what to manage
    mgr->setRoot  (scene);

    // show the whole scene
    mgr->showAll();

    
    Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
    TutorialWindow->openWindow(WinPos,
            WinSize,
            "OpenSG 02TransformAnimation Window");

    //Enter main Loop
    TutorialWindow->mainLoop();

    }

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

void setupAnimation(void)
{
    //Number Keyframe Sequence
    KeyframeNumberSequenceReal32UnrecPtr XTransKeyframes = KeyframeNumberSequenceReal32::create();
    XTransKeyframes->addKeyframe(1.0,0.0f);
    XTransKeyframes->addKeyframe(5.0,2.0f);
    XTransKeyframes->addKeyframe(-5.0,4.0f);
    XTransKeyframes->addKeyframe(1.0,6.0f);
    
    KeyframeNumberSequenceReal32UnrecPtr YRotKeyframes = KeyframeNumberSequenceReal32::create();
    YRotKeyframes->addKeyframe(0.0,0.0f);
    YRotKeyframes->addKeyframe(45.0,2.0f);
    YRotKeyframes->addKeyframe(0.0,4.0f);

    KeyframeNumberSequenceReal32UnrecPtr ZScaleKeyframes = KeyframeNumberSequenceReal32::create();
    ZScaleKeyframes->addKeyframe(1.0,0.0f);
    ZScaleKeyframes->addKeyframe(2.0,2.0f);
    ZScaleKeyframes->addKeyframe(3.0,4.0f);
    ZScaleKeyframes->addKeyframe(1.0,6.0f);

    //Animator
    TransformAnimatorUnrecPtr TheAnimator = TransformAnimator::create();
    TheAnimator->setXTranslationSequence(XTransKeyframes);
    TheAnimator->setXRotationSequence(YRotKeyframes);
    TheAnimator->setYRotationSequence(YRotKeyframes);
    //TheAnimator->setZRotationSequence(YRotKeyframes);
    TheAnimator->setZScaleSequence(ZScaleKeyframes);
    
    //Animation
    TheAnimation = FieldAnimation::create();
    TheAnimation->setAnimator(TheAnimator);
    TheAnimation->setInterpolationType(Animator::LINEAR_INTERPOLATION);
    TheAnimation->setCycling(2);
    TheAnimation->setAnimatedField(TorusNodeTrans, std::string("matrix"));

    //Animation Listener
    TheAnimation->addAnimationListener(&TheAnimationListener);

    TheAnimation->attachUpdateProducer(TutorialWindow->editEventProducer());
    TheAnimation->start();
}

