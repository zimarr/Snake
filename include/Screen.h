#pragma once

#include <SDL/SDL.h>
#include "Snake.h"

class Screen {
    public:
        Screen();
        ~Screen() {};

        void init(const char title[], int x, int y, int w, int h, int flags);
        void init_textures();

        void loop();
        void handleEvents();
        void quit() {};

        void draw(); 

    private:
        int height;
        int width;

        SDL_Window *window;
        
        SDL_Renderer *rend;

        // SDL_Texture *board;

        Snake snake;

        bool running;
};