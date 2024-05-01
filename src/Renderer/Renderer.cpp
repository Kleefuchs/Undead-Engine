#include "../include/Renderer/Renderer.h"

//Scene:

void UE::Renderer::_setScene(UE::Scene* scene) {
	this->scene = scene;
}

UE::Scene* UE::Renderer::_getScene() {
	return this->scene;
}

//Window:

UE::Window* UE::Renderer::getWindow() {
	return &this->window;
}

//Rendering:

void UE::Renderer::renderScene() {
	assert(this->scene!=nullptr); //Check for the existence of scene. Automatically removed in production build.
	this->renderSprites(this->scene->getSprites());
}

void UE::Renderer::renderSprites(std::vector<UE::BaseSprite*>* sprites) {
	for(uint16_t currentSpriteIndex = 0; currentSpriteIndex < sprites->size(); currentSpriteIndex++) {
		UE::BaseSprite* currentSprite = sprites->at(currentSpriteIndex);
		this->renderSprite(currentSprite);
	} 
}

void UE::Renderer::renderSprite(UE::BaseSprite* sprite) {
	sprite->render();
}

void UE::Renderer::render() {
	ClearBackground(BLACK);
	this->renderScene();
}