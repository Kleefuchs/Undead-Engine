#ifndef UE_RENDERER_H
#define UE_RENDERER_H

#include "Window.h"
#include <vector>
#include "BaseSprite.h"

namespace UE {
	class Renderer
	{
	private:
		UE::Window window;
		std::vector<UE::BaseSprite*> sprites;
		void renderSprites();
	public:
		void render();
		/**
		* Returns the adress of the window
		**/
		UE::Window* getWindow();
		/**
		* Returns the adress of the sprites
		**/
		std::vector<UE::BaseSprite*>* getSprites();
	};
}

#endif // UE_RENDERER_H