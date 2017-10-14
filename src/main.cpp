#include <memory>
#include <CEGUI/CEGUI.h>

using namespace CEGUI;

auto main() -> int {

    WindowManager& windowManager = WindowManager::getSingleton();
    std::shared_ptr<Window> myRoot(windowManager.createWindow("DefaultWindow", "root"));
    System::getSingleton().getDefaultGUIContext().setRootWindow(myRoot.get());

    std::shared_ptr<FrameWindow> frameWindow(dynamic_cast<FrameWindow*>(
            windowManager.createWindow("TaharezLook/FrameWindow", "testWindow")));

    myRoot->addChild(frameWindow.get());

    // position a quarter of the way in from the top-left of parent.
    frameWindow->setPosition(UVector2(UDim( 0.25f, 0.0f), UDim(0.25f, 0.0f)));
    // set size to be half the size of the parent
    frameWindow->setSize(USize(UDim(0.5f, 0.0f), UDim(0.5f, 0.0f)));
    // Add some text
    frameWindow->setText("Hello World!");

    System::getSingleton().renderAllGUIContexts();
}
