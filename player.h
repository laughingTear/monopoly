#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "square.h"

using namespace std;
class Game;

class Player {
	public:

		Player(string name):_name(name){
			
			cout <<  _name << " player created\n";
			_account=50000;
		};

		string getName();
		int getDiceVal();
		void rollDices();
		void advance(int steps);
		void setPosition(Square* p);
		Square* getPosition();
		int getAccount();
		void changeAccount(int change);
		int payTax();
		bool isPlayAgain();

	private:
		int d1;
		int d2;
		Square* _position;
		string _name;
		int _account;
};
#endif

