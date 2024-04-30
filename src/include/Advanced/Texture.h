#ifndef UE_ADVANCEDTEXTURE_H
#define UE_ADVANCEDTEXTURE_H

#include <raylib.h>

namespace UE {

	class AdvancedTexture : public Texture
	{
		AdvancedTexture(Texture texture);
	};
	typedef AdvancedTexture ATexture;
}

#endif