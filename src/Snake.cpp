#include "Snake.h"

Snake::Snake() {
    head = new Bod();
    head->pos = Vector2 {7, 3};
}

void Snake::update() {
    head = new Bod {head, Vector2 {head->pos + head->dir}, head->dir};
}