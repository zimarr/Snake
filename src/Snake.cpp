#include "Snake.h"

Snake::Snake() {
    head = new Bod();
    head->pos = Pos {7, 3};
}

Snake::~Snake() {
    head = new Bod();
    head->pos = Pos {7, 3};
}

void Snake::update() {
    head = new Bod {head, Pos {head->pos + head->dir}, head->dir};
}