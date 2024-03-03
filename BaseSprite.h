#ifndef UE_BASESPRITE_H
#define UE_BASESPRITE_H

#include <raylib.h>
#include "AdvancedRectangle.h"

namespace UE {
	class BaseSprite
	{
	private:
		Color tint = WHITE;
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
		Color getTint();
		/**
		* Sets the tint
		**/
		void setTint(const Color tint);
		/**
		* Returns the adress of the source rectangle
		**/
		UE::AdvancedRectangle* getSource();
		/**
		* Sets the source rectangle.
		**/
		void setSource(const Rectangle source);
		/**
		* Sets the source rectangle
		**/
		void setSource(const float x, const float y, const float width, const float height);
		//Objects:
	};

}

#endif // UE_BASESPRITE_H