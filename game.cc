#include <iostream>
#include <string>
#include <stdio.h>
#include "game.h"
#include "player.h"
using namespace std;

Square tmp[40];

Game::Game(){
	cout << "Welcome\n";
}

void Game::create(){
	numPlayer = 0;
	createBoard();
}

void Game::playRound(){
	for (int i(0); i<numPlayer; i++){
		Player* p = players[i];
		do {
			
			int val = p->getDiceVal();
			p->advance(val);
		} while(p->isPlayAgain());

	}
}

void Game::addPlayer(Player p) {
	
	players[numPlayer] = &p; 
	numPlayer += 1;
	p.setPosition(squares_ptr[0]);
	//cout << players[0]->getName();
}

void Game::createBoard(){
	tmp[0] = Square("GO");
	squares_ptr[0] = &tmp[0];
	char buffer[20];
	for (int i(1); i< 40; i++) {
		switch(i){
			case (4):
				tmp[i] = Square("impot");
				break;
			case (39):
				tmp[i] = Square(" tax de luxe");
			default:
				sprintf(buffer, "case %d", i);
				tmp[i] = Square(buffer);
		};
		
		squares_ptr[i] = &tmp[i];
		//cout<<(*squares_ptr[i-1]).getName();
		squares_ptr[i-1]->setNextSquare(squares_ptr[i]);
	}
	squares_ptr[39]->setNextSquare(squares_ptr[0]);
}
