#include "Snake.h"

Snake::Snake() {
    head = new Bod {NULL, Pos {1, 7}, Direction::RIGHT};
    head = new Bod {head, Pos {2, 7}, Direction::RIGHT};
    head = new Bod {head, Pos {3, 7}, Direction::RIGHT};
    board_width = 17;
    board_height = 15;
}

Snake::~Snake() {
}

void Snake::update() {
    Bod* temp = head;
    
    while (temp) {
        temp->pos = temp->pos + temp->dir;
        temp = temp->next;
    }
}

#include <iostream>

void Snake::draw(SDL_Renderer* rend) {
    Bod* temp = head;
    
    while (temp) {
        SDL_SetRenderDrawColor(rend, 100, 255, 100, 255);
        SDL_Rect destRect{temp->pos.x * 40, temp->pos.y * 40, 40, 40};
        SDL_RenderFillRect(rend, &destRect);
        temp = temp->next;
    }
}