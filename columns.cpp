#include "columns.hpp"

columns::columns(int p, int h){
    pos = p;
    height = h;
    x = 30 + (pos*115) -115;
    switch (pos)  {
    case 1:
        moverRect = {30,y,71,115};
        break;

    case 2:
        moverRect = {145,y,71,115};
        break;
    
    case 3:
        moverRect = {260,y,71,115};
        break;

    case 4:
        moverRect = {375,y,71,115};
        break;

    case 5:
        moverRect = {490,y,71,115};
        break;

    case 6:
        moverRect = {605,y,71,115};
        break;

    case 7:
        moverRect = {720,y,71,115};
        break;

    default:
        moverRect = {x,y,71,115};
}
}
void columns::add_hidden_card(Cards card){

    hidden = hidden + 1;
    height = height +1;
    stacks.push_back(card);

}
void columns::draw(){
    if (height == 0 or stacks.size()==0){
        //SDL_Rect r = {710,383,71,100}; // real
        SDL_Rect r = {639,383,71,100}; // trial
        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &r, &moverRect);
    }
    else{
        for (int i = 0; i < hidden;i++){
            SDL_Rect r = {639,383,71,100};
            SDL_Rect m = {x,y+ (i*50),71,115};


            SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &r, &m);

        }
    }
}