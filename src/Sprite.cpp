#include "include/Sprite.hpp"
#include <raylib.h>

//Getters and Setters:

void Sprite::setBody(Rectangle body) {
    this->body = body;
}

Rectangle* Sprite::getBodyPtr() {
    return &this->body;
}

void Sprite::setTint(Color tint) {
    this->tint = tint;
}

Color* Sprite::getTintPtr() {
    return &this->tint;
}

void Sprite::drawNoTexture() {
    DrawRectangleRec(this->body, this->tint);
}

#ifndef NDEBUG
void Sprite::drawDebug() {
    this->drawNoTexture();
}
#endif

void Sprite::draw() {
}