#include "cards.hpp"
#include<SDL.h>
#include "drawing.hpp"
#pragma once
class hearts: public Cards{

    SDL_Rect Drawing_rect;
    SDL_Rect mover;
    public:

    hearts( int pos, int n);

    void draw(int x, int y);

};