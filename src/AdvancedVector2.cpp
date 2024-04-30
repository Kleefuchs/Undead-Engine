#include "pch.h"

UE::AdvancedVector2::AdvancedVector2() {
	return;
}

UE::AdvancedVector2::AdvancedVector2(const float x, const float y) {
	this->x = x;
	this->y = y;
	return;
}

UE::AdvancedVector2::AdvancedVector2(const Vector2 vector2) {
	*this = vector2;
}