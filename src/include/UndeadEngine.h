#ifndef UE_UNDEADENGINE_H
#define UE_UNDEADENGINE_H

#include "FLAGS.h"
#include <raylib.h>
#include <stdint.h>
#include "Renderer/Renderer.h"
#include "Scene/Scene.h"
#include "Sprite/TexturedSprite.h" //Only in here so the Developer can access it without including it manually.

namespace UE {
	class UndeadEngine {
	private:
		UE::Renderer renderer;
		UE::Scene* scene;
		//Update:
		/*
		 * Updates all scene related things
		*/
		void updateScene(UE::Scene* scene);
		/*
		 * Updates all sprites in the vector
		*/
		void updateSprites(std::vector<UE::BaseSprite*>* sprites);
		/*
		 * Updates everything
		*/
		void update();
	public:
		/**
		 * Initializes the UndeadEngine
		**/
		void init(const uint16_t width, const uint16_t height, UE::Scene* scene, const char* title);
		/**
		 * Runs the UndeadEngine GameLoop
		**/
		void run();
		//Scene:
		/**
		 * Set the Scene by passing the adress of a Scene object
		**/
		void setScene(UE::Scene* scene);
		/**
		 * Returns the adress of the Scene
		**/
		UE::Scene* getScene();
		//Renderer:
		/**
		 * Returns the adress of the Renderer object
		**/
		UE::Renderer* getRenderer();
	};
}

#endif //UE_UNDEADENGINE_H
