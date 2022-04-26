#include "spades.hpp"

spades::spades(int pos, int n):Cards(1, pos, n){

    int y_c = 0;
    int x_c = (n-1)*71;

    switch (n)  {
    case 1:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    case 2:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    
    case 3:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    case 4:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    case 5:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    case 6:
        Drawing_rect= {x_c,y_c,71,100};
        break;

    case 7:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    case 8:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    
    case 9:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    case 10:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    case 11:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    case 12:
        Drawing_rect = {x_c,y_c,71,100};
        break;
    case 13:
        Drawing_rect = {x_c,y_c,71,100};
        break;

    default:
        Drawing_rect = {x_c,y_c,71,100};

    

}}

void spades::draw(int x, int y){
    mover = {x,y,71,115};
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &Drawing_rect, &mover);
}