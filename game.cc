#include <iostream>
#include <string>
#include "game.h"
#include "player.h"
using namespace std;

Game::Game(){
}

void Game::create(){
	numPlayer = 0;
	
	addPlayer(1);
	addPlayer(2);
	
	cout<<"\n"<<(players[0]->_numbPlayer);
	cout<<(players[0]->getNumb());

	createBoard();
}

void Game::playRound(){
	for (int i(0); i<numPlayer; i++){
		Player* p = players[i];
		Player test(2);
		Player* ptest = &test;
		cout<<"\nhere\n";
		cout<<(*ptest).getNumb();
		cout<<"\nhere2\n";
		cout<<ptest->getNumb();//good
		Player* ps_test[2];
		ps_test[0] = &test;
		cout<<"\nhere3\n";
		cout<<ps_test[0]->getNumb();//good
		//cout << test;
		//cout<< p->_name;
		//cout<<p->getDiceVal();
		//cout<<(players[i]->getName());
		//<<"rolls the dice and get ";//<<p->getDiceVal();
	}
}

void Game::addPlayer(int numb) {
	Player tmp(numb);
	players[numPlayer] = &tmp; //problem is here !!!
	numPlayer += 1;
	//cout << players[0]->getName();
}

void Game::createBoard(){
	Square tmp = Square("GO");
	squares_ptr[0] = &tmp;
	for (int i(1); i< 40; i++) {
		tmp = Square("Case");
		squares_ptr[i] = &tmp;
		//cout<<(*squares_ptr[i-1]).getName();
		(*squares_ptr[i-i]).setNextSquare(squares_ptr[i]);
	}
	(*squares_ptr[39]).setNextSquare(squares_ptr[0]);
	
}
