#ifndef KF_WINDOW_HPP
#define KF_WINDOW_HPP

#include <cstdint>
#include <string>

/*Not really a window just holding some data for raylib related stuff and interacting with raylib when needed
One of the most anying thing you'll have to deal with*/
class Window {
    private:
        int16_t width = 0;
        int16_t height = 0;
        std::string title = "undefined";
        bool running = false;

        /*Adjust the real window size to changes inside of the Window class*/
        void updateWindowSize();

        /*Adjust the real window title to changes inside of the Window class*/
        void updateWindowTitle();
    public:
        //Getters and setters:

        /*Sets the width to the specified value*/
        void setWidth(int16_t width);

        /*Returns a pointer to the width*/
        int16_t* getWidthPtr();

        /*Sets the height to the specified value*/
        void setHeight(int16_t height);

        /*Returns a pointer to the height*/
        int16_t* getHeightPtr();

        /*Sets the width to the specified value
        Will fail in DEBUG Build if the title is too long*/
        void setTitle(std::string title);

        /*Will return the value of the title*/
        char* getTitle();

        //Raylib Function Replacement:

        void close();

        bool isRunning();

        //Init:
        /*Initializes the raylib window
        Use this version of Init only when you have set widht, height and title before else it will either fail (DEBUG Build) or it will crash (Release Build)*/
        void init();

        /*Initializes the raylib window
        Will overwrite the previously set values*/
        void init(int16_t widht, int16_t height, std::string title);
};

#endif