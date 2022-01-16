#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class Player {
private:
	int currentHand;
	int points;

public:
	Player();
	void checkHand(int guess);
	int getPoints();
	int getHand();
	void setHand(int coin);
	void resetHand();
};

class HumanPlayer : public Player {
public:
	void chooseCoins();
	int guessNumber();
};

class ComputerPlayer : public Player {
public:
	void chooseCoins();
	int guessNumber();
};
