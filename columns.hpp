#include<SDL.h>
#include "drawing.hpp"
#include "cards.hpp"
#include <vector>
#include <iostream>
using namespace std;

class columns{

    int pos;
    SDL_Rect moverRect;
    int hidden;
    int x = 84;
    int y = 50;
    int height;
    //cards topcard;
    vector <Cards> stacks;

    public:

    columns(int pos, int height);

    void draw();

    void card_picked(){};

    void remove_card(){};

    void add_card(){};

    void add_hidden_card(Cards card);


};