#ifndef UE_RENDERER_H
#define UE_RENDERER_H

#include "Window.h"

namespace UE {
	class Renderer
	{
	private:
		UE::Window window;
	public:
		void render();
		/**
		* Returns the adress of the window
		**/
		UE::Window* getWindow();
	};
}

#endif // UE_RENDERER_H