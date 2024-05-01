#ifndef UE_WINDOW_H
#define UE_WINDOW_H

#include "../../FLAGS.h"
#include "../../GUI/Window/WindowData.h"
#include <raylib.h>

namespace UE {
	class Window
	{
	private:
		UE::WindowData data;
	public:
		Window();
		Window(const int width, const int height);
		/*
		* Calls InitWindow
		* Uses width and height values which have been set earlier
		**/
		void init(const char* title);
		/**
		* Calls InitWindow
		**/
		void init(const int width, const int height, const char* title);
		/**
		* Closes the window
		**/
		void close();

		~Window();

		// Size:

		/**
		* Sets the size
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setSize(const int width,const int height);
		/**
		* Calls SetWindowMinSize
		**/
		void setMinSize(const int width, const int height);
		/**
		* Calls SetWindowMaxSize
		**/
		void setMaxSize(const int width, const int height);
		/**
		* Sets the width
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setWidth(const int width);
		/**
		* Sets the height
		* Changes it in data
		* Calls SetWindowSize
		**/
		void setHeight(const int height);
		/**
		* Returns the adress of the width
		* DO NOT TRY TO CHANGE VALUE AS IT WILL NOT AFFECT THE ACTUAL WINDOW!
		* USE setSize or setWidth/setHeight FOR SUCH MATTERS!
		**/
		int* getWidth();
		/**
		* Returns the adress of the height
		* DO NOT TRY TO CHANGE VALUE AS IT WILL NOT AFFECT THE ACTUAL WINDOW!
		* USE setSize or setWidth/setHeight FOR SUCH MATTERS!
		**/
		int* getHeight();
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
		* Returns the result of IsWindowMaximized
		**/
		bool isMaximized();

		// Window Looks:

		void setOpacity(const float opacity);
		/**
		* Calls ToggleBorderless
		**/
		void toggleBorderless();
		/**
		* Calls ToggleFullscreen
		**/
		void toggleFullscreen();
		/**
		* Calls SetWindowIcon
		**/
		void setIcon(const Image icon);
		/**
		* Calls SetWindowIcon
		**/
		void setIcon(const Image* icon);
		/**
		* Calls SetWindowIcons
		**/
		void setIcons(Image* icons, const int count);
		// Data:

		/**
		* Calls SetWindowTitle
		**/
		void setTitle(const char* title);
		/**
		* Calls SetWindowPosition
		**/
		void setPosition(const int x, const int y);
		/**
		* Returns the result of GetWindowPosition
		**/
		Vector2 getPosition();
		/**
		* Calls SetWindowMonitor
		**/
		void setMonitor(const int monitor);
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
		* Returns the result of IsWindowFocus
		**/
		bool isFocused();
		/**
		* Returns the result of IsWindowResized
		**/
		bool isResized();
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