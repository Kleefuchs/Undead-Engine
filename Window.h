#ifndef UE_WINDOW_H
#define UE_WINDOW_H

#include "WindowData.h"

namespace UE {
	class Window
	{
	private:
		UE::WindowData data;
	public:

		// Size:

		/**
		* Sets the size
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setSize(const float width,const float height);
		/**
		* Sets the width
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setWidth(const float width);
		/**
		* Sets the height
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setHeight(const float height);
		/**
		* Returns the adress of the width
		* DO NOT TRY TO CHANGE VALUE AS IT WILL NOT AFFECT THE ACTUAL WINDOW!
		* USE setSize or setWidth/setHeight FOR SUCH MATTERS!
		**/
		float* getWidth();
		/**
		* Returns the adress of the height
		* DO NOT TRY TO CHANGE VALUE AS IT WILL NOT AFFECT THE ACTUAL WINDOW!
		* USE setSize or setWidth/setHeight FOR SUCH MATTERS!
		**/
		float* getHeight();
		/**
		* Calls MinimizeWindow
		**/
		void minimize();
		/**
		* Returns the reulst of IsWindowMinimized
		**/
		bool isMinimized();
		/**
		* Calls MaximizeWindow
		**/
		void maximize();
		/**
		* Returns the reulst of IsWindowMaximized
		**/
		bool isMaximized();

		// Data:

		/**
		* Returns the adress of the data
		**/
		UE::WindowData* getData();

		// Info:

		/**
		* Returns the result of IsWindowReady
		**/
		bool isReady();

		/**
		* Returns the result of WindowShouldClose
		**/
		bool shouldClose();
		// State:
		/**
		* Calls SetWindowState
		**/
		void setState(const unsigned int flags);
		/**
		* Calls ClearWindowState
		**/
		void clearState(const unsigned int flags);
		/**
		* Calls IsWindowState
		**/
		bool isState(const unsigned int flag);
	};
}


#endif // UE_WINDOW_H