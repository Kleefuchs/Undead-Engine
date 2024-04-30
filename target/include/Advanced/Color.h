#ifndef UE_ADVANCEDCOLOR_H
#define UE_ADVANCEDCOLOR_H

#include <raylib.h>

namespace UE {
	class AdvancedColor : public Color
	{
	public:
		AdvancedColor();
		AdvancedColor(const unsigned char r, const unsigned char g, const unsigned char b, const unsigned char a);
		AdvancedColor(const unsigned char r, const unsigned char g, const unsigned char b);
		AdvancedColor(const Color color);
	};
	typedef AdvancedColor AColor;
}

#endif // !UE_ADVANCEDCOLOR_H