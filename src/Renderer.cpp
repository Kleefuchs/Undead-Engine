#include "pch.h"

void UE::Renderer::renderSprites() {
	for (uint16_t i = 0; i < this->sprites.size(); i++) {
		BaseSprite* currentSprite = this->sprites.at(i);
		currentSprite->render();
	}
}

void UE::Renderer::render() {
	BeginDrawing();
		ClearBackground(BLACK);
		this->renderSprites();
	EndDrawing();
}

// Managers:

UE::Window* UE::Renderer::getWindow() {
	return &this->window;
}

// Lists:

std::vector<UE::BaseSprite*>* UE::Renderer::getSprites() {
	return &this->sprites;
}