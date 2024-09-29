#include "include/Renderer.hpp"
#include "include/Sprite.hpp"
#include "include/Window.hpp"
#include <raylib.h>

void Renderer::drawSpriteNoTexture(Sprite* sprite) {
    sprite->drawNoTexture();
}

#ifndef NDEBUG
void Renderer::drawSpriteDebug(Sprite* sprite) {
    sprite->drawDebug();
}
#endif

void Renderer::drawSprite(Sprite* sprite) {
    sprite->draw();
}

//Getters and setters:

void Renderer::setSprites(std::map<Sprite*, Sprite*>* sprites) {
    this->sprites = sprites;
}

std::map<Sprite*, Sprite*>** Renderer::getSpritesPtr() {
    return &this->sprites;
}

//Draw:

void Renderer::drawSpritesNoTexture() {
    /*Loops through sprites.
     this is cursed as hell*/
    for(std::map<Sprite*, Sprite*>::iterator it = this->sprites->begin(); it != this->sprites->end(); it++) {
        this->drawSpriteNoTexture(it->first);
    }
}

#ifndef NDEBUG
void Renderer::drawSpritesDebug() {
    /*Loops through sprites.
     this is cursed as hell*/
    for(std::map<Sprite*, Sprite*>::iterator it = this->sprites->begin(); it != this->sprites->end(); it++) {
        this->drawSpriteDebug(it->first);
    }
}
#endif

void Renderer::drawSprites() {
    /*Loops through sprites.
     this is cursed as hell*/
    for(std::map<Sprite*, Sprite*>::iterator it = this->sprites->begin(); it != this->sprites->end(); it++) {
        this->drawSprite(it->first);
    }
}

void Renderer::drawNoTexture() {
    BeginDrawing();
        this->drawSpritesNoTexture();
    EndDrawing();
}

#ifndef NDEBUG
void Renderer::drawDebug() {
    BeginDrawing();
        ClearBackground(BLACK);
        //this->drawSpritesDebug();
    EndDrawing();
}
#endif

void Renderer::draw() {
    BeginDrawing();
        this->drawSprites();
    EndDrawing();
}

void Renderer::init(Window* window, std::map<Sprite*, Sprite*>* sprites) {
    this->window = window;
    this->sprites = sprites;
}