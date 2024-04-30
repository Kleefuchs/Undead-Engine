#ifndef UE_ADVANCEDVECTOR2_H
#define UE_ADVANCEDVECTOR2_H

#include <raylib.h>

namespace UE {
	class AdvancedVector2 : public Vector2
	{
	public:
		AdvancedVector2();
		AdvancedVector2(const float x, const float y);
		AdvancedVector2(const Vector2 vector2);
	};
	typedef AdvancedVector2 AVector2;
}


#endif // UE_ADVANCEDVECTOR2_H