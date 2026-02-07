#pragma once

#include "Vector2.h"
#include "Bod.h"
#include "Direction.h"

class Snake {
    public: 
        Snake();
        ~Snake();

        void update();

    private:
        Bod* head;
};