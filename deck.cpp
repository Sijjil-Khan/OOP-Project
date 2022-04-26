#include "deck.hpp"
using namespace std;
#pragma once

    // Deck();
    //constructor overloading
    Deck::Deck(int t,int s,int p){
        int Top=t;
        int Size=s;
    }
    //to draw cards from deck (newly added)
void Deck::draw_card(){
    opened_cards += 3;
}
    bool Deck::isEmpty() {
            if(Top == -1){
                cout<<"deck empty"<<endl;
                return true;
                }
            else{
                return false;
                }
        }
    
    int Deck::getSize(){
        return stacks.size();
        }

    Cards Deck:: remove(int idx){
        if(!isEmpty()){
            // Top--;
            int i = 0;
            auto it = stacks.begin();
            while(it != stacks.end()){
                if(i == idx){
                    Cards a = stacks[idx];
                    stacks.erase(it);
                    return a;

                }
                else{
                    it ++;
                }
            }
            }
            // return deck[Top+1];
            }
    
    void Deck::draw() {
	show = 3;

    if (true){
        //SDL_Rect r = {710,383,71,100}; // real
        SDL_Rect r = {639,383,71,100}; // trial
        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &r, &moverRect);
        Size -= 3;

        for (int i = 0; i<3; i++){
            SDL_Rect d = {639,383,71,100};
            SDL_Rect a = {30,40,50,100};
        }
    }
    else{
            Size = 0;
            SDL_Rect r = {639,383,71,100};
            SDL_Rect m = {};

            SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &r, &m);

        }
    }

    void Deck::display() {
        for (int i = 0; i < show; i++) {
            stacks[i].draw();
        }
    }
    