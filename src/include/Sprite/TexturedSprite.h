#ifndef UE_TEXTUREDSPRITE_H
#define UE_TEXTUREDSPRITE_H

#include "../FLAGS.h"
#include "../Sprite/BaseSprite.h"

namespace UE {

	class TexturedSprite : public BaseSprite
	{
	private:
		Texture* texture = nullptr;
		Rectangle source = { 0, 0, 0, 0 };
	public:
		//Texture:
		/**
		 * Returns the address of the texture
		**/
		//Source:
		/**
		 * Returns the address of the source
		**/
		Rectangle* getSource();
		/**
		 * Sets the source
		**/
		void setSource(Rectangle source);
		Texture* getTexture();
		/**
		 * Sets the texture
		**/
		void setTexture(Texture* texture);
		//Rendering:
		void render();
	};

}

#endif