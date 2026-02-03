#pragma once

#include <SDL.h>

class Screen {
    public:
        Screen();
        ~Screen() {};

        void init(const char title[], int x, int y, int w, int h, int flags);
        void initTextures();

        void loop();
        void handleEvents();
        void quit() {};

        void draw(); 

    private:
        int height;
        int width;

        SDL_Window *window;
        

        SDL_Renderer *rend;

        SDL_Texture *board;
        SDL_Texture *settingsbuttonclosed;
        SDL_Texture *settingsbuttonopen;

        bool running;
};