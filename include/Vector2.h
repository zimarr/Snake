#pragma once

#include "Direction.h"

struct Vector2 {
    int x, y;

    Vector2& operator+(Direction dir) {
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
};

