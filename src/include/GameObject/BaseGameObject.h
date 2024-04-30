#ifndef UE_BASEGAMEOBJECT_H
#define UE_BASEGAMEOBJECT_H

#include "../Renderer/Sprite/BaseSprite.h"

namespace UE {
	class UndeadEngine;
}

namespace UE {
	class BaseGameObject : public BaseSprite
	{
	public:
		void (*update) (UE::UndeadEngine* engine, UE::BaseGameObject) = nullptr;
	};
}

#endif