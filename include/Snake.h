#pragma once

#include <SDL/SDL.h>
#include "Pos.h"
#include "Bod.h"
#include "Direction.h"

class Snake {
    public: 
        Snake();
        ~Snake();

        void update();

        void draw(SDL_Renderer *rend);

    private:
        Bod* head;

        int board_width, board_height;
};