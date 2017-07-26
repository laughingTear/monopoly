#include "player.h"
#include <stdlib.h>
void Player::rollDices(){
	d1 = rand() % 6;
	d2 = rand() % 6;
}

int Player::getDiceVal(){
	rollDices();
	//cout << d1;
	return d1+d2;
}

int Player::getNumb(){
	return _numbPlayer;
}

string Player::getName(){
	return _name;
}
