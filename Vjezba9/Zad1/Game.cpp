#include "Game.h"

Game::Game() {
	pointsGoal = 3;
	running = true;
}

bool Game::checkWin(int points) {
	return pointsGoal == points;
}

bool Game::isRunning() {
	return running;
}