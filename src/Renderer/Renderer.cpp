#include "../include/Renderer/Renderer.h"

//Sprites:

std::vector<UE::BaseSprite*>* UE::Renderer::getSprites() {
	return &this->sprites;
}

void UE::Renderer::addSprite(UE::BaseSprite* sprite) {
	this->sprites.push_back(sprite);
}

//Window:

UE::Window* UE::Renderer::getWindow() {
	return &this->window;
}

//Rendering:

void UE::Renderer::renderSprites() {
	for (uint16_t i = 0; i < this->sprites.size(); i++) {
		BaseSprite* currentSprite = this->sprites.at(i);
		currentSprite->render();
	}
}

void UE::Renderer::render() {
	ClearBackground(BLACK);
	this->renderSprites();
}