#ifndef UE_UNDEADENGINE_H
#define UE_UNDEADENGINE_H

#include <raylib.h>
#include <stdint.h>

namespace UE {
	class UndeadEngine {
	public:
		void init(const uint16_t width, const uint16_t height, const char* title);
		void run();
	};
}

#endif //UE_UNDEADENGINE_H
