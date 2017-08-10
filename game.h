#ifndef GAME_H
#define GAME_H
#include "player.h"
class Player;
class Square;

class Game {
	public:
		Game();
		void create();
		void playRound();
		void addPlayer(Player p);
		void createBoard();
	private:
		Player * players [8];
		int numPlayer;
		Square * squares_ptr[40];

};
#endif
