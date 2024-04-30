#ifndef UE_RENDERER_H
#define UE_RENDERER_H

#include "../GUI/Window/Window.h"
#include <vector>
#include "../Renderer/Sprite/BaseSprite.h"

namespace UE {
	class Renderer
	{
	private:
		UE::Window window;
		std::vector<UE::BaseSprite*> sprites;
		//Rendering:
		void renderSprites();
	public:
		//Sprites:
		/**
		 * Adds a pointer to a GameObject object which is supposed to be drawn by the Renderer
		**/
		void addSprite(UE::BaseSprite* sprite);
		/**
		* Returns the adress of the sprites
		**/
		std::vector<UE::BaseSprite*>* getSprites();
		//Window:
		UE::Window* getWindow();
		//Rendering
		void render();
		/**
		* Returns the adress of the window
		**/
	};
}

#endif // UE_RENDERER_H