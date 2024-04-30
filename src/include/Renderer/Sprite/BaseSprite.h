#ifndef UE_BASESPRITE_H
#define UE_BASESPRITE_H

#include <raylib.h>
#include "../../Advanced/Rectangle.h"
#include "../../Advanced/Color.h"
#include "../../Advanced/Vector2.h"

namespace UE {
	class BaseSprite
	{
	private:
		UE::AdvancedColor tint = WHITE;
		float rotation = 0;
		UE::AdvancedVector2 origin = { 0, 0 };
		UE::AdvancedRectangle source = { 0, 0, 0, 0 };
		UE::AdvancedRectangle body = { 0, 0, 0, 0 };
	public:
		// Position:
		/**
		* Returns the adress of the body (on screen)
		**/
		UE::AdvancedRectangle* getBody();
		/**
		* Sets the body
		**/
		void setBody(const UE::AdvancedRectangle body);
		/**
		* Sets the body
		**/
		void setBody(const float x, const float y, const float width, const float height);
		/**
		* Returns the adress of the rotation
		**/
		float* getRotation();
		/**
		* Sets rotation.
		**/
		void setRotation(const float rotation);
		/**
		* Returns the adress of the origin
		**/
		UE::AdvancedVector2* getOrigin();
		/**
		* Sets origin
		**/
		void setOrigin(const UE::AdvancedVector2 origin);

		// Graphic:
		/**
		* Returns the adress of the tint
		**/
		UE::AdvancedColor* getTint();
		/**
		* Sets the tint
		**/
		void setTint(const UE::AdvancedColor tint);
		/**
		* Render the Sprite
		**/
		void render();
	};

}

#endif // UE_BASESPRITE_H