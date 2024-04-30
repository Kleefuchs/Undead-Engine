#ifndef UE_TEXTUREDGAMEOBJECT_H
#define UE_TEXTUREDGAMEOBJECT_H

#include "../GameObject/BaseGameObject.h"
#include "../Renderer/Sprite/TexturedSprite.h"

namespace UE {

	class TexturedGameObject : public TexturedSprite, public BaseGameObject
	{
	};

}

#endif