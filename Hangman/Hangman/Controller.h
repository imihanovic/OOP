#pragma once
#include "Model.h"
#include "View.h"
#include <iostream>
class HangmanController {
public:
	HangmanController() {};
	void userEntry(HangmanModel& model);
	void checkLetter(char letter, HangmanModel& model);
	void updateLives(HangmanModel& model);
	bool checkIfGameIsOver(HangmanModel& model);
};
#pragma once
