#include "pch.h"

void UE::Renderer::render() {
	BeginDrawing();
		ClearBackground(BLACK);
	EndDrawing();
}

//Managers:

UE::Window* UE::Renderer::getWindow() {
	return &this->window;
}