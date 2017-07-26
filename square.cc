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
	return nextSquare;
}
