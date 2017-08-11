#include "player.h"
#include <stdlib.h>
void Player::rollDices(){
	d1 = rand() % 6+1;
	d2 = rand() % 6+1;
	//cout << "dices: "<<d1<<d2<<endl;
}

int Player::getDiceVal(){
	rollDices();
	//cout << d1;
	return d1+d2;
}

bool Player::isPlayAgain() {
	if (d1==d2) {
		cout<<getName()<<" plays again\n";
		return true;
	}
	return false;
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
		if (tmp->getName()=="GO") {
			changeAccount(20000);
			cout<<getName()<<" is on GO and he wins 20000\n";
		}
	}
	if(tmp->getName()=="impot") {
		
		int tax = payTax();
		cout<<getName()<<" is on impot and he pays " << tax<< "\n";
			
	} else if(tmp->getName()=="taxe de luxe") {
		changeAccount(-5000);
		cout<<getName()<<" is on taxe de luxe and he pays " << "5000" << "\n";
			
	}
	setPosition(tmp);
	cout << getName() << " gets " << steps << " and moves to " << getPosition()->getName() <<"\n";
	cout << getName() << " has " << getAccount()<<"\n";
}

int Player::payTax() {
	int payment = getAccount()*0.1;
	payment = payment > 5000?5000:payment;
	changeAccount(payment);
	return payment;
}

int Player::getAccount(){
	return _account;
}

void Player::changeAccount(int change){
	_account += change;
}
