#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <string>
using namespace std;

class Square{
	public:
		Square(){};
		Square(string name): _name(name){};

		Square* getNextSquare();
		void setNextSquare(Square* s);
		string getName();
		void setName(string name);

	private:
		string _name;
		Square* nextSquare;

};
#endif

