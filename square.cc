#include <iostream>
#include <string>
#include "square.h"

string Square::getName(){
	return _name;
}

void Square::setNextSquare(Square* s){
	nextSquare = s;

}

Square* Square::getNextSquare(){
	//cout << getName() << " gets the next square " << nextSquare->getName() << "\n";
	return nextSquare;
}

void Square::setName(string name){
	_name = name;
}
