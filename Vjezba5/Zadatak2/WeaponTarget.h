#include<iostream>
#include<time.h>
#include<random>
#include "Position.h"

using namespace std;

Position::Position() {
	x = 0;
	y = 0;
	z = 0;
}

void Position::setRandom(const int l, const int u) {
	
	x = l * ((double)rand() / (double)RAND_MAX) - u;
	y = l * ((double)rand() / (double)RAND_MAX) - u;
	z = l * ((double)rand() / (double)RAND_MAX) - u;

}

class Weapon {

	int capacity = 6;

public:
	Position wPos;
	int numberOf = 6;

	void shoot();
	void reload();
};

void Weapon::reload() {
	numberOf = capacity;
}

void Weapon::shoot() {
	if (numberOf > 0)
		numberOf -= 1;
	else cout << "You are out of bullets!" << endl;
}

class Target {
public:
	Position a, g;
	bool shot;
};