#include "../include/Scene/Scene.h"

//Size:

int* UE::Scene::getWidth() {
    return &this->width;
}

void UE::Scene::setWidth(int width) {
    this->width = width;
}

int* UE::Scene::getHeight() {
    return &this->height;
}

void UE::Scene::setHeight(int height) {
    this->height = height;
}

//Sprite:
void UE::Scene::addSprite(UE::BaseSprite* sprite) {
    this->sprites.push_back(sprite);
}

std::vector<UE::BaseSprite*>* UE::Scene::getSprites() {
    return &this->sprites;
}

//Cam:

void UE::Scene::setCam(UE::CodeCam2D* cam) {
    this->cam = cam;
}

UE::CodeCam2D* UE::Scene::getCam() {
    return this->cam;
}