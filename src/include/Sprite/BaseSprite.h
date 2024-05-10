#ifndef UE_BASESPRITE_H
#define UE_BASESPRITE_H

#include "../FLAGS.h"
#include <raylib.h>

namespace UE {
	class UndeadEngine;
	class BaseSprite
	{
	protected:
		Color tint = WHITE;
		float rotation = 0;
		Vector2 origin = { 0, 0 };
		Rectangle body = { 0, 0, 0, 0 };
	public:
		void (*update) (UE::UndeadEngine* engine, UE::BaseSprite) = nullptr;
		// Position:
		/**
		* Returns the adress of the body (on screen)
		**/
		Rectangle* getBody();
		/**
		* Sets the body
		**/
		void setBody(const Rectangle body);
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
		Vector2* getOrigin();
		/**
		* Sets origin
		**/
		void setOrigin(const Vector2 origin);

		// Graphic:
		/**
		* Returns the adress of the tint
		**/
		Color* getTint();
		/**
		* Sets the tint
		**/
		void setTint(const Color tint);
		/**
		* Render the Sprite
		**/
		virtual void render();
	};

}

#endif // UE_BASESPRITE_H