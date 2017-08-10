#include <iostream>
#include "game.h"
#include "player.h"
using namespace std;

int main() {
	Game game;
	game.create();
	Player john("John");
	game.addPlayer(john);
	Player peter("Peter");
	game.addPlayer(peter);
	for(int i(0); i<20; i++){
		game.playRound();
	}
	return 0;
}
