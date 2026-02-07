#pragma once

#include "Vector2.h"
#include "Direction.h"

struct Bod {
    Bod* next;
    Vector2 pos;
    Direction dir;
};