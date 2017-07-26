#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "square.h"
using namespace std;

class Player {
	public:

		Player(int numbPlayer):_numbPlayer(numbPlayer){
			cout << "#" << _numbPlayer << " player created\n";
		};

		string getName();
		int getDiceVal();
		void rollDices();
		void advance(int steps);
		int getNumb();
			string _name;
			int _numbPlayer;

	private:
			int d1;
			int d2;
			Square* position;
};
#endif

