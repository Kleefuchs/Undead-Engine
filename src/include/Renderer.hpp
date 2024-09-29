#ifndef KF_RENDERER_HPP
#define KF_RENDERER_HPP

#include "Sprite.hpp"
#include "Window.hpp"
#include <map>
#include <raylib.h>

/*An object to render all of the things in the game*/
class Renderer {
    private:
        /*The sprite pointer can be accessed with the sprite pointer itself which in theory should be an instant lookup.
         In practise I have no fucking idea what this piece of crap does*/
        std::map<Sprite*, Sprite*>* sprites;

        Window* window;

        /*Draws a single specified sprite without a texture*/
        void drawSpriteNoTexture(Sprite* sprite);

        #ifndef NDEBUG
        /*Draws a single specified sprite without a texture
        Is removed if NDEBUG is defined aka the engine is compiled as a Release build*/
        void drawSpriteDebug(Sprite* sprite);
        #endif

        /*Draws a single specified sprite*/
        void drawSprite(Sprite* sprite);
    public:
        //Getters and setters:

        /*Sets the pointer to the sprites*/
        void setSprites(std::map<Sprite*, Sprite*>* sprites);

        /*Returns a pointer to the sprites*/
        std::map<Sprite*, Sprite*>** getSpritesPtr();

        //Draw:

        /*Draws all sprites, which need to be drawn, aka on screen without a texture*/
        void drawSpritesNoTexture();

        #ifndef NDEBUG
        /*Draws all sprites, which need to be drawn, aka on screen without a texture
        Is removed if NDEBUG is defined aka the engine is compiled as a Release build*/
        void drawSpritesDebug();
        #endif

        /*Draws all sprites, which need to be drawn, aka on screen*/
        void drawSprites();

        /*Draws everything within the game without textures*/
        void drawNoTexture();
        
        #ifndef NDEBUG
        /*Draws everything within the game without textures*/
        void drawDebug();
        #endif

        /*Draws everything within the game*/
        void draw();

        /*This basically just gives the Renderer some data it needs and will probably initialize some components of the rendering stuff*/
        void init(Window* window, std::map<Sprite*, Sprite*>* sprites);
};

#endif