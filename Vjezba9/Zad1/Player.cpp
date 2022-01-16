#include "Player.h"
#include<vector>

Player::Player() {
	currentHand = 0;
	points = 0;
}

void Player::checkHand(int guess) {
	cout << endl << guess << endl;
	if (currentHand == guess) {
		points++;
		cout << endl << "CORRECT!" << endl;
	}
	else {
		cout << endl << "INCORRECT!" << endl;
	}
}

int Player::getPoints() {
	return points;
}

int Player::getHand() {
	return currentHand;
}

void Player::setHand(int coin) {
	currentHand += coin;
}

void Player::resetHand() {
	currentHand = 0;
}

int HumanPlayer::guessNumber() {
	cout << "Guess sum of coins in opponents hand: ";
	int x;
	cin >> x;
	return x;
}

int ComputerPlayer::guessNumber() {
	vector<int> guess = { 0,1,2,3,4,5,6,7,8,9,10,11,12,15 };
	return guess[rand() % guess.size()];
}

void HumanPlayer::chooseCoins() {
	resetHand();

	int count;
	int playerHand;
	int i = 0;

	cout << "Choose the number of coins (0, 1, 2, or 3): " << endl;
	while (true) {

		cin >> count;
		if (count == 0 || count == 1 || count == 2 || count == 3) {
			break;
		}
		else {
			cout << "INPUT INCORRECT!" << endl;
		}
	}

	while (i < count) {
		cout << "Choose coins (1,2,5):" << endl;
		cin >> playerHand;

		if (playerHand == 1) {
			setHand(1);
			i++;
		}
		else if (playerHand == 2) {
			setHand(2);
			i++;
		}
		else if (playerHand == 5) {
			setHand(5);
			i++;
		}
	}
}

void ComputerPlayer::chooseCoins() {
	resetHand();
	int count = rand() % 3;
	int computerHand;
	for (int i = 0; i < count; i++) {
		computerHand = rand() % 3;
		if (computerHand == 0) {
			setHand(1);
		}
		else if (computerHand == 1) {
			setHand(2);
		}
		else {
			setHand(5);
		}
	}
}