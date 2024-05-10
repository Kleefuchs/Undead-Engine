#ifndef UE_SCENE_H
#define UE_SCENE_H

#include "../FLAGS.h"
#include "../Sprite/BaseSprite.h"
#include "../CodeCam/CodeCam2D.h"
#include <vector>

namespace UE {

	class Scene
	{
		private:
			std::vector<UE::BaseSprite*> sprites;
			UE::CodeCam2D* cam = nullptr;
			int width = 0;
			int height = 0;
		public:
			//Size:
			/**
			 * Returns the address of the width of the scene
			**/
			int* getWidth();
			/**
			 * Sets the width of the scene
			**/
			void setWidth(int width);
			/**
			 * Sets the height of the scene
			**/
			void setHeight(int height);
			/**
			 * Returns the address of the height of the scene
			**/
			int* getHeight();
			//Sprite:
			/**
			 * Adds a address of a sprite
			**/
			void addSprite(UE::BaseSprite* sprite);
			/**
			 * Returns the address of the vector Sprites
			**/
			std::vector<UE::BaseSprite*>* getSprites();
			//Cam:
			/**
			 * Sets the address of the cam pointer. Basically setting the cam
			**/
			void setCam(UE::CodeCam2D* cam);
			/**
			 * Returns the address of the CodeCam2D object
			**/
			UE::CodeCam2D* getCam();
	};

}

#endif