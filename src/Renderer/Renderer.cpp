#include "../include/Renderer/Renderer.h"
#include <iostream>

//Scene:

void UE::Renderer::_setScene(UE::Scene* scene) {
	this->scene = scene;
}

UE::Scene* UE::Renderer::_getScene() {
	return this->scene;
}

//Initialisation:

void UE::Renderer::init(const uint16_t width, const uint16_t height, UE::Scene* scene, const char* title) {
	assert(*scene->getWidth() > 0);
	assert(width > 0);
	this->_setScene(scene);
	UE::CodeCam2D* sceneCam = this->scene->getCam();
	sceneCam->getCoreCam()->zoom *= (float) ((float) width / (float) *this->scene->getWidth()); //Calculate how much zooming in or out is required for it to be the same size on all resolutions.
	sceneCam->getCoreCam()->offset.x *= sceneCam->getCoreCam()->zoom; //Apply the same logic to offset.x by using the zoom which is more of a size factor.
	sceneCam->getCoreCam()->offset.y *= sceneCam->getCoreCam()->zoom; //Same as above with the minor difference of this being for offset.y
	this->window.init(width, height, title);
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
	BeginMode2D(*this->scene->getCam()->getCoreCam());
		this->renderScene();
	EndMode2D();
}