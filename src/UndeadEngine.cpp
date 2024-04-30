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

//Renderer:

UE::Renderer* UE::UndeadEngine::getRenderer() {
	return &this->renderer;
}