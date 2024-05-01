#include "include/UndeadEngine.h"

void UE::UndeadEngine::init(const uint16_t width, const uint16_t height, const char* title) {
	this->renderer.getWindow()->init(width, height, title);
}

void UE::UndeadEngine::run() {
	while (this->renderer.getWindow()->shouldClose() == false) {
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