#include <iostream>
using namespace std;
#include<SDL.h>
#include "drawing.hpp"
#pragma once
class Cards{

    protected:
    int colour;
    int position;
    int number;
    public:
    bool CanBePlaced(Cards card);

    virtual void draw(){};

    Cards(int colour, int position, int number);

    Cards();



    // overload canbeplaced for vector 
    // and also look into determining types etc // although one might not need to do that --> explore this option

};