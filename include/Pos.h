#pragma once

#include "Direction.h"

struct Pos {
    int x, y;

    Pos& operator+(Direction dir) {
        switch (dir) {
            case Direction::UP:
                y--;
                break;
            case Direction::DOWN:
                y++;
                break;
            case Direction::LEFT:
                x--;
                break;
            case Direction::RIGHT:
                x++;
                break;
        }        
        
        return *this;
    }

    Pos& operator+=(Direction dir) {
        return *this + dir;
    }
};

