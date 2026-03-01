#pragma once

#include "Pos.h"
#include "Direction.h"

struct Bod {
    Bod *back;
    Bod *front;
    Pos pos;
    Direction dir;
};