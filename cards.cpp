#include "cards.hpp"
#pragma once

Cards::Cards(int col, int pos, int n){
    colour = col;
    position = pos;
    number = n;
    
}

Cards::Cards(){
    colour = 0; // 0 implies red and 1 implies black
    position = 0;
    number = 0;
}
bool Cards::CanBePlaced(Cards card){
        if (card.position<8){
            if (card.colour!=colour and (number == card.number+1)){
                return true;}
            else {
                return false;
            }
        }
        if (card.position > 7 and card.position < 12){
            if (card.colour==colour and (number == card.number+1)){
                return true; // change this part to be fixed for each and every card 
                // make this function virtual
        }
        }
        else {
            return false;
        }
    }