// OpenSG Tutorial Example: Hello World
//
// Minimalistic OpenSG program
// 
// This is the shortest useful OpenSG program 
// (if you remove all the comments ;)
//
// It shows how to use OpenSG together with GLUT to create a little
// interactive scene viewer.
//

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGPerspectiveCamera.h>
#include <OpenSG/OSGGradientBackground.h>
#include <OpenSG/OSGPolygonForeground.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGViewport.h>

#include <OpenSG/Toolbox/OSGFCFileHandler.h>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);
    
	//Create some Field Containers
	NodePtr ChildNode1 = Node::create();
	NodePtr ChildNode2 = Node::create();
	NodePtr CameraBeaconNode = Node::create();
	CameraBeaconNode->addChild(ChildNode1);
	CameraBeaconNode->addChild(ChildNode2);


	PerspectiveCameraPtr ThePerspectiveCamera = PerspectiveCamera::create();
	beginEditCP(ThePerspectiveCamera);
		ThePerspectiveCamera->setBeacon(CameraBeaconNode);
		ThePerspectiveCamera->setFov   (deg2rad(60.f));
		ThePerspectiveCamera->setNear  (0.1f);
		ThePerspectiveCamera->setFar   (10000.f);
	endEditCP(ThePerspectiveCamera);

	GradientBackgroundPtr TheGradientBackground = GradientBackground::create();
	TheGradientBackground->addLine(Color3f(1.0f,0.0f,0.0f), 0.0f);
	TheGradientBackground->addLine(Color3f(0.0f,1.0f,0.0f), 0.5f);
	TheGradientBackground->addLine(Color3f(0.0f,0.0f,1.0f), 1.0f);

	PolygonForegroundPtr ThePolygonForeground = PolygonForeground::create();
	ThePolygonForeground->getPositions().addValue(Pnt2f(0.0f,1.0f));

	ViewportPtr TheViewport = Viewport::create();
	TheViewport->setRoot(CameraBeaconNode);
	TheViewport->setCamera(ThePerspectiveCamera);
	TheViewport->setBackground(TheGradientBackground);
	TheViewport->getForegrounds().addValue(ThePolygonForeground);

	FCFileType::FCPtrStore Containers;
	Containers.insert(TheViewport);

	//Save the Field Containers to a binary file
	//FCFileHandler::the()->write(Containers,Path("./TestFieldContainers.fcb"));

	FCFileType::FCTypeVector IgnoreTypes;
	IgnoreTypes.push_back(Node::getClassType().getId());
	//Save the Field Containers to a xml file
	FCFileHandler::the()->write(Containers,Path("./TestFieldContainers.xml"),IgnoreTypes);


	FCFileType::FCPtrStore NewContainers;
	NewContainers = FCFileHandler::the()->read(Path("./TestFieldContainers.xml"));

	FCFileHandler::the()->write(NewContainers,Path("./TestFieldContainers2.xml"),IgnoreTypes);
    // OSG exit
    osgExit();

    return 0;
}

