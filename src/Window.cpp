#include "include/Window.hpp"
#include <cassert>
#include <cstdint>
#include <raylib.h>
#include <string>

void Window::updateWindowSize() {
    SetWindowSize(this->width, this->height);
}

void Window::updateWindowTitle() {
    SetWindowTitle(this->title.c_str());
}

//Getters and setters:

void Window::setWidth(int width) {
    assert(width > 0);
    this->width = width;
    if(this->running==true) {
        this->updateWindowSize();
    }
}

int* Window::getWidthPtr() {
    return &this->width;
}

void Window::setHeight(int height) {
    assert(height > 0);
    this->height = height;
    if(this->running==true) {
        this->updateWindowSize();
    }
}

int* Window::getHeightPtr() {
    return &this->height;
}

void Window::setTitle(std::string title) {
    this->title = title;
    if(this->running==true) {
        this->updateWindowTitle();
    }
}

//Raylib Function Replacement:

void Window::close() {
    CloseWindow();
    this->running = false;
}

bool Window::isRunning() {
    return this->running;
}

//Init:

void Window::init() {
    if(this->running==true) {
        return;
    }
    InitWindow(this->width, this->height, this->title.c_str());
    this->running = true;
}

void Window::init(int width, int height, std::string title) {
    if(this->running==true) {
        return;
    }
    this->setWidth(width);
    this->setHeight(height);
    this->setTitle(title);
    this->init();
}