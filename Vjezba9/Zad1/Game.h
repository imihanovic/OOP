#include <iostream>

using namespace std;

class Game {
private:
	int pointsGoal;

public:
	bool running;
	Game();

	bool checkWin(int points);
	bool isRunning();
};
