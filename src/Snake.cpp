#include "Snake.h"

Snake::Snake() {
    head = new Bod {NULL, NULL, Pos {1, 7}, Direction::RIGHT};
    head = new Bod {head, NULL, Pos {2, 7}, Direction::RIGHT};
    head = new Bod {head, NULL, Pos {3, 7}, Direction::RIGHT};
    head->back->front = head;
    head->back->back->front = head->back;
    tail = head->back->back;
    board_width = 17;
    board_height = 15;
}

Snake::~Snake() {
}

void Snake::update() {
    Bod *temp = tail;
    
    while (temp) {
        if (!temp->front) {
            temp->pos += temp->dir;
        } else {
            temp->pos = temp->front->pos;
        }
        temp = temp->front;
    }
}

#include <iostream>

void Snake::draw(SDL_Renderer* rend) {
    Bod *temp = head;
    
    while (temp) {
        SDL_SetRenderDrawColor(rend, 100, 255, 100, 255);
        SDL_Rect destRect{temp->pos.x * 40, temp->pos.y * 40, 40, 40};
        SDL_RenderFillRect(rend, &destRect);
        temp = temp->back;
    }
}

void Snake::handle_events(SDL_Event e) {
    if (e.type == SDL_KEYDOWN) {
        
        switch (e.key.keysym.sym) {
            default:
                break;
            case SDLK_UP:
                head->dir = Direction::UP;
                break;
            case SDLK_DOWN:
                head->dir = Direction::DOWN;
                break;
            case SDLK_LEFT:
                head->dir = Direction::LEFT;
                break;
            case SDLK_RIGHT:
                head->dir = Direction::RIGHT;
                break;
        }        
    }

}