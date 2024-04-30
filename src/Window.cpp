#include "include/Window.h"

UE::Window::Window() {
	return;
}

UE::Window::Window(const int width, const int height) {
	this->setSize(width, height);
	return;
}

void UE::Window::init(const char* title) {
	InitWindow(this->data.width, this->data.height, title);
	this->data.open = true;
	return;
}

void UE::Window::init(const int width, const int height, const char* title) {
	InitWindow(width, height, title);
	this->setSize(width, height);
	this->setTitle(title);
	this->data.open = true;
	return;
}

void UE::Window::close() {
	CloseWindow();
	this->data.open = false;
	return;
}

UE::Window::~Window() {
	this->close();
	return;
}

// Size:

void UE::Window::setSize(const int width, const int height) {
	this->data.width = width;
	this->data.height = height;
	SetWindowSize((int)width, (int)height);
	return;
}

void UE::Window::setMinSize(const int width, const int height) {
	SetWindowMinSize(width, height);
	return;
}

void UE::Window::setMaxSize(const int width, const int height) {
	SetWindowMaxSize(width, height);
	return;
}

void UE::Window::setWidth(const int width) {
	this->data.width = width;
	SetWindowSize((int)width, this->data.height);
	return;
}

void UE::Window::setHeight(const int height) {
	this->data.height = height;
	SetWindowSize(this->data.width, (int)height);
	return;
}

int* UE::Window::getWidth() {
	return &this->data.width;
}

int* UE::Window::getHeight() {
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

bool UE::Window::isMaximized() {
	return IsWindowMaximized();
}

// Display Looks:

void UE::Window::setOpacity(const float opacity) {
	SetWindowOpacity(opacity);
	return;
}

void UE::Window::toggleBorderless() {
	ToggleBorderlessWindowed();
	return;
}

void UE::Window::toggleFullscreen() {
	ToggleFullscreen();
	return;
}

void UE::Window::setIcon(const Image icon) {
	SetWindowIcon(icon);
	return;
}

void UE::Window::setIcon(const Image* icon) {
	SetWindowIcon(*icon);
	return;
}

void UE::Window::setIcons(Image* icons, const int count) {
	SetWindowIcons(icons, count);
	return;
}

// Data:

void UE::Window::setTitle(const char* title) {
	SetWindowTitle(title);
	return;
}

void UE::Window::setPosition(const int x, const int y) {
	SetWindowPosition(x, y);
	return;
}

Vector2 UE::Window::getPosition() {
	return GetWindowPosition();
}

void UE::Window::setMonitor(const int monitor) {
	SetWindowMonitor(monitor);
	return;
}

UE::WindowData* UE::Window::getData() {
	return &this->data;
}

// Info:

bool UE::Window::isReady() {
	return IsWindowReady();
}

bool UE::Window::isFocused() {
	return IsWindowFocused();
}

bool UE::Window::isResized() {
	return IsWindowResized();
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