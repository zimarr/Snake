#include <SDL2/SDL.h>
#include "Screen.h"

int main(int argc, char *argv[]) {    
    Screen screen;
    screen.init("Snake", SDL_WINDOWPOS_CENTERED,  SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_BORDERLESS);
    screen.loop();
    return 0;
}