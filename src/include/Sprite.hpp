#ifndef KF_SPRITE_HPP
#define KF_SPRITE_HPP

#include <raylib.h>

/*Basic Object in the Game*/
class Sprite {
    private:
        Rectangle body;
        Color tint = WHITE;
    public:
        /*Sets the body to the specified values*/
        void setBody(Rectangle body);

        /*Returns a pointer to the body*/
        Rectangle* getBodyPtr();

        /*Sets the tint to the specified value*/
        void setTint(Color tint);

        /*Returns a pointer to the tint*/
        Color* getTintPtr();
        
        /*Draws the Sprite without a texture*/
        void drawNoTexture();

        #ifndef NDEBUG
        /*Draws the Sprite without a texture.
        In fact it just calls drawNoTexture, but is removed if NDEBUG is defined aka the engine is compiled as a Release build*/
        void drawDebug();
        #endif
        /*Normal draw function using the animated texture*/
        void draw();
};

#endif