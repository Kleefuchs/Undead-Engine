#ifndef UE_UNDEADENGINE_H
#define UE_UNDEADENGINE_H

#include <raylib.h>
#include <stdint.h>
#include "Renderer.h"

namespace UE {
	class UndeadEngine {
	private:
		UE::Renderer renderer;
	public:
		void init(const uint16_t width, const uint16_t height, const char* title);
		void run();
		//Managers:
		UE::Renderer* getRenderer();
	};
}

#endif //UE_UNDEADENGINE_H
