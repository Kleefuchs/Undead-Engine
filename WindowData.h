#ifndef UE_WINDOWDATA_H
#define UE_WINDOWDATA_H

#include <stdint.h>

namespace UE {
	/**
	* Hold the following information about the window:
	* Size
	* open
	**/
	struct WindowData
	{
	public:
		int width = 0, height = 0;
		bool open = false;
	};
}

#endif // UE_WINDOWDATA_H