#include "include/UndeadEngine.hpp"
#include <cstdint>
#include <string>

Debugger* UndeadEngine::getDebuggerPtr() {
    return &this->debugger;
}

Renderer* UndeadEngine::getRendererPtr() {
    return &this->renderer;
}

void UndeadEngine::addSprite(Sprite* sprite) {
    this->sprites.insert({sprite, sprite});
}

std::map<Sprite*, Sprite*>* UndeadEngine::getSpritesPtr() {
    return &this->sprites;
}

Window* UndeadEngine::getWindowPtr() {
    return &this->window;
}

//Gameloop:

//Update:

void UndeadEngine::update() {
}

void UndeadEngine::run() {
    while(this->window.isRunning()) {
        this->update();
        this->renderer.drawDebug();
    }
}

//Init:

void UndeadEngine::init(int16_t width, int16_t height, std::string title) {
    /*Opens a window and gives it some user defined data
    Will also start sound related stuff and some Components of the Engine*/
    this->window.init(width, height, title);
    this->renderer.init(&window, &sprites);
}