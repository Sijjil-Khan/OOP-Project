#include "cards.hpp"
#include<SDL.h>
#include "drawing.hpp"
#pragma once
class spades: public Cards{

    SDL_Rect Drawing_rect;
    SDL_Rect mover;
    public:

    spades( int pos, int n);

    void draw(int x, int y);

};