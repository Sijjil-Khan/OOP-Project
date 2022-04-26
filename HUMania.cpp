#include <iostream>
#include "HUMania.hpp"
#include "hearts.hpp"
#include "clubs.hpp"
#include "spades.hpp"
#include "diamonds.hpp"

//hearts heart( 3,  1);
void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    for (int i =0; i<Cols.size();i++){
        Cols[i].draw();
    }
    //heart.draw(100, 400);



}

int RandomGenerator(){
    int store = rand()%3;
    return store;
}

void HUMania::HU_quit(){
    Cols.clear();
}

HUMania:: HUMania(){
    for (int i = 1; i< 8;i++){

        Cols.push_back(columns(i,0));

    }
}

void HUMania::createObject(int x, int y)
{
    random = RandomGenerator();
    /*if (random==0){
        pigeons.push_back(new Pigeon(x,y));
    }
    else if (random==1){
        bees.push_back(new Bee(x,y));
    }
    if (random==2){
        butterflys.push_back(new Butterfly(x,y));
        std::cout <<"B";
    }*/
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}
