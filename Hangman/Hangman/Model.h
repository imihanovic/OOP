#pragma once
#include <iostream>
#include <string>
#include <fstream>
class HangmanModel {
public:
	std::string movie;
	std::string guessMovie;
	std::string usedLetters;
	int lives = 8;
	bool inGame;

	HangmanModel();
	~HangmanModel() {};
};

#pragma once
