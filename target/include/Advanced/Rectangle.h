#ifndef UE_ADVANCEDRECTANGLE_H
#define UE_ADVANCEDRECTANGLE_H

#include <raylib.h>

namespace UE {
	class AdvancedRectangle : public Rectangle
	{
	public:
		AdvancedRectangle();
		AdvancedRectangle(const float x, const float y, const float width, const float height);
		AdvancedRectangle(const Rectangle rectangle);
	};
	typedef AdvancedRectangle ARectangle;
}


#endif // UE_ADVANCEDRECTANGLE_H