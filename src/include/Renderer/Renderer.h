#ifndef UE_RENDERER_H
#define UE_RENDERER_H

#include "../FLAGS.h"
#include "../GUI/Window/Window.h"
#include <vector>
#include "../Sprite/BaseSprite.h"
#include "../Scene/Scene.h"
#include <assert.h>

namespace UE {
	class Renderer
	{
	private:
		UE::Window window;
		UE::Scene* scene = nullptr;
		
		//Rendering:
		/**
		 * Renders the Scene
		**/
		void renderScene();
		/**
		 * Renders the sprites inside of the Scene
		**/
		void renderSprites(std::vector<UE::BaseSprite*>* sprites);
		/**
		 * Renders a singular Sprite object
		**/
		void renderSprite(UE::BaseSprite* sprite);
	public:
		//Scene:
		/**
		 * DO NOT USE!
		 * The engine already handles this for you
		 * Use UndeadEngine::setScene function for this
		 * Sets the Scene
		**/
		void _setScene(UE::Scene* scene);
		/**
		 * DO NOT USE!
		 * Use UndeadEngine::getScene function for this
		 * Returns the adress of the Scene object
		**/
		UE::Scene* _getScene();
		//Window:
		UE::Window* getWindow();
		//Rendering
		/**
		 * Renders everything that needs to be rendered
		 * Also includes logic to check for stuff that does not need to be rendered.
		**/
		void render();
		/**
		* Returns the adress of the window
		**/
	};
}

#endif // UE_RENDERER_H