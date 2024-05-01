#include "../include/Sprite/BaseSprite.h"
#include <iostream>

// Position:

Rectangle* UE::BaseSprite::getBody() {
	return &this->body;
}

void UE::BaseSprite::setBody(const Rectangle body) {
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

// Graphic:

Vector2* UE::BaseSprite::getOrigin() {
	return &this->origin;
}

void UE::BaseSprite::setOrigin(const Vector2 origin) {
	this->origin = origin;
}

Color* UE::BaseSprite::getTint() {
	return &this->tint;
}

void UE::BaseSprite::setTint(const Color tint) {
	this->tint = tint;
}

void UE::BaseSprite::render() {
	DrawRectanglePro(this->body, this->origin, this->rotation, this->tint);
}