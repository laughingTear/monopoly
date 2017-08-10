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

string Player::getName(){
	return _name;
}

void Player::setPosition(Square* position){
	_position = position;
}

Square* Player::getPosition(){
	return _position;
}

void Player::advance(int steps){
	Square* tmp = _position;
	for (int i(0); i<steps; i++){
		tmp = tmp->getNextSquare();
	}
	setPosition(tmp);
}

int Player::getAccount(){
	return _account;
}

void Player::changeAccount(int change){
	_account += change;
}
