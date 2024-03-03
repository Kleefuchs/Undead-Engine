#include "pch.h"

// Position:

UE::AdvancedRectangle* UE::BaseSprite::getBody() {
	return &this->body;
}

void UE::BaseSprite::setBody(const UE::AdvancedRectangle body) {
	this->body = body;
	return;
}

void UE::BaseSprite::setBody(const float x, const float y, const float width, const float height) {
	this->body.x = x;
	this->body.y = y;
	this->body.width = width;
	this->body.height = height;
	return;
}

float* UE::BaseSprite::getRotation() {
	return &this->rotation;
}

void UE::BaseSprite::setRotation(const float rotation) {
	this->rotation = rotation;
	return;
}

UE::AdvancedVector2* UE::BaseSprite::getOrigin() {
	return &this->origin;
}

void UE::BaseSprite::setOrigin(const UE::AdvancedVector2 origin) {
	this->origin = origin;
}