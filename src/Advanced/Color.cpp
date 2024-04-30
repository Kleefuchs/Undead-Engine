#include "../include/Advanced/Color.h"

UE::AdvancedColor::AdvancedColor() {
}

UE::AdvancedColor::AdvancedColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

UE::AdvancedColor::AdvancedColor(unsigned char r, unsigned char g, unsigned char b) {
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = 255;
}

UE::AdvancedColor::AdvancedColor(const Color color) {
	this->r = color.r;
	this->b = color.b;
	this->g = color.g;
	this->a = color.a;
}