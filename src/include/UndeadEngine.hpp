#ifndef KF_UNDEADENGINE_HPP
#define KF_UNDEADENGINE_HPP

#include "Debugger.hpp"
#include "Renderer.hpp"
#include "Window.hpp"
#include <string>

class UndeadEngine {
    private:
        Debugger debugger;
        Renderer renderer;
        Window window;
        std::map<Sprite*, Sprite*> sprites;
    public:
        //Getters and Setters:
        /*Returns pointer to Debugger*/
        Debugger* getDebuggerPtr();

        /*Returns pointer to Renderer*/
        Renderer* getRendererPtr();

        /*Adds a sprite to map*/
        void addSprite(Sprite* sprite);

        /*Returns pointer to sprites*/
        std::map<Sprite*, Sprite*>* getSpritesPtr();

        /*Returns pointer to window*/
        Window* getWindowPtr();

        //Gameloop:

        //Update:

        /*Updates everything withing the UndeadEngine*/
        void update();

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

        /*Runs the Gameloop which is there to call all of the functions and components withing the UndeadEngine*/
        void run();

        //Init:

        /*Initalizes the UndeadEngine.
        This also creates a window, so please call this before doing any texture related stuff.
        Will also call other crucial components of the UndeadEngine. (For example: Sound related stuff)

        Currently initializes: Window, Renderer

        My Advice is to create a window with this then load an image for you loading screen and then load the rest while displaying the image.
        One approach would be to have a static image and then just load everything in the main thread or try multithreading.*/
        void init(int width, int height, std::string title);
};

#endif