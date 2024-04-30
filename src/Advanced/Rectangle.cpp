#include "include/Advanced/Rectangle.h"

UE::AdvancedRectangle::AdvancedRectangle() {
	return;
}

UE::AdvancedRectangle::AdvancedRectangle(const float x, const float y, const float width, const float hight) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	return;
}

UE::AdvancedRectangle::AdvancedRectangle(const Rectangle rectangle) {
	*this = rectangle;
}