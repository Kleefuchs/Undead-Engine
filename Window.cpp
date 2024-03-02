#include "pch.h"

// Size:

void UE::Window::setSize(const float width, const float height) {
	this->data.width = width;
	this->data.height = height;
	SetWindowSize((int) width, (int) height);
	return;
}

void UE::Window::setWidth(const float width) {
	this->data.width = width;
	SetWindowSize((int)width, this->data.height);
	return;
}

void UE::Window::setHeight(const float height) {
	this->data.height = height;
	SetWindowSize(this->data.width, (int)height);
	return;
}

float* UE::Window::getWidth() {
	return &this->data.width;
}

float* UE::Window::getHeight() {
	return &this->data.height;
}

void UE::Window::minimize() {
	MinimizeWindow();
	return;
}

bool UE::Window::isMinimized() {
	return IsWindowMinimized();
}

void UE::Window::maximize() {
	MaximizeWindow();
	return;
}

bool UE::Window::isMinimized() {
	return IsWindowMaximized();
}

// Data:

UE::WindowData* UE::Window::getData() {
	return &this->data;
}

// Info:

bool UE::Window::isReady() {
	return IsWindowReady();
}

bool UE::Window::shouldClose() {
	return WindowShouldClose();
}

// State:

void UE::Window::setState(const unsigned int flags) {
	SetWindowState(flags);
	return;
}

void UE::Window::clearState(const unsigned int flags) {
	ClearWindowState(flags);
	return;
}

bool UE::Window::isState(const unsigned int flag) {
	return IsWindowState(flag);
}