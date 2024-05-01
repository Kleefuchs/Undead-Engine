#include "../include/Scene/Scene.h"

//Sprite:
void UE::Scene::addSprite(UE::BaseSprite* sprite) {
    this->sprites.push_back(sprite);
}

std::vector<UE::BaseSprite*>* UE::Scene::getSprites() {
    return &this->sprites;
}