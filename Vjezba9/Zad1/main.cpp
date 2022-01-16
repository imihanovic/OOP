#include<iostream>
#include "Game.h"
#include "Player.h"

int main() {
	Game game;
	HumanPlayer human;
	ComputerPlayer computer;
	srand(time(NULL));
	while (game.isRunning()) {
		human.chooseCoins();
		human.checkHand(computer.guessNumber());
		if (game.checkWin(human.getPoints())) {
			cout << "WINNER!" << endl;
			game.running = false;
		}

		computer.chooseCoins();
		computer.checkHand(human.guessNumber());
		if (game.checkWin(computer.getPoints())) {
			cout << "GAME OVER!" << endl;
			game.running = false;
		}
	}
}