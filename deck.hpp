#include<SDL.h>
#include "drawing.hpp"
#include "cards.hpp"
#include <vector>
#include <iostream>
#pragma once
class Deck {
public: 
	Deck();
	Deck(int,int,int);
    Cards remove(int);
	void draw();
	bool isEmpty();
	int getSize();
	vector<Cards> stacks;
	void display();
	void draw_card();
	protected:
	int position; //position of card in deck
	int show; //number of cards to display
    Cards *deck; //array of cards
    int Top; //last element of deck
    int Size; //number of cards in deck
	SDL_Rect moverRect;
    int x = 84;
    int y = 50;
	int opened_cards = 0;
	

private:
	int three;
	
};