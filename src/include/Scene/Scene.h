#ifndef UE_SCENE_H
#define UE_SCENE_H

#include "../FLAGS.h"
#include "../Sprite/BaseSprite.h"
#include <vector>

namespace UE {

	class Scene
	{
		private:
			std::vector<UE::BaseSprite*> sprites;
		public:
			//Sprite:
			void addSprite(UE::BaseSprite* sprite);
			std::vector<UE::BaseSprite*>* getSprites();
	};

}

#endif