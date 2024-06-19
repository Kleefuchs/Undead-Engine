#include "include/UndeadEngine.h"
#include "include/Scene/Scene.h"
#include "include/Sprite/BaseSprite.h"
#include <cstdint>
#include <vector>

void UE::UndeadEngine::init(const uint16_t width, const uint16_t height, UE::Scene* scene, const char* title) {
	this->renderer.init(width, height, scene, title);
	this->scene = scene;
}

//Update:

void UE::UndeadEngine::updateSprites(std::vector<UE::BaseSprite*>* sprites) {
	for(uint16_t currentSpriteIndex = 0; currentSpriteIndex < sprites->size(); currentSpriteIndex++) {
		UE::BaseSprite* currentSprite = sprites->at(currentSpriteIndex);
		if(currentSprite->update==nullptr) {
			continue;
		}
		currentSprite->update(this, currentSprite);
	}
}

void UE::UndeadEngine::updateScene(UE::Scene* scene) {
	this->updateSprites(this->scene->getSprites());
}

void UE::UndeadEngine::update() {
	this->updateScene(this->scene);
}

void UE::UndeadEngine::run() {
	while (this->renderer.getWindow()->shouldClose() == false) {
		this->update();
		BeginDrawing();
			renderer.render();
		EndDrawing();
	}
}

//Scene::
void UE::UndeadEngine::setScene(UE::Scene* scene) {
	this->scene = scene;
	this->renderer._setScene(this->scene);
}

UE::Scene* UE::UndeadEngine::getScene() {
	return this->scene;
}

//Renderer:

UE::Renderer* UE::UndeadEngine::getRenderer() {
	return &this->renderer;
}