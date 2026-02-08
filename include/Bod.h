#pragma once

#include "Pos.h"
#include "Direction.h"

struct Bod {
    Bod* next;
    Pos pos;
    Direction dir;
};