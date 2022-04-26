#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include<vector>
#include "columns.hpp"
#include<list>
#include "deck.hpp"
#include "cards.hpp"
using namespace std;

class HUMania{

    //Right now we're creating one pigeon, 
    //Pigeon p1(3,6);

    // In the solution you have to create vectors of pigeons, eggs, and nests    
    vector <columns> Cols;
    vector <Cards> card;
    vector <Deck> stacks;

    



    int random;
    int see;


    public:

    HUMania();

    void HU_quit();
    void drawObjects(); 
    void createObject(int x, int y);
    
};