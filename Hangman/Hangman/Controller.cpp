#include "Model.h"
#include "Controller.h"
#include <iostream>
#include <string>
using namespace std;

void HangmanController::userEntry(HangmanModel& model) {
	char letter;
	cin >> letter;
	checkLetter(letter, model);
}

void HangmanController::checkLetter(char letter, HangmanModel& model) {
	int movieWordSize = model.movie.size();

	letter = toupper(letter);  //turning lowercase letters to uppercase

	for (int i = 0; i < movieWordSize; i++) {

		if (model.guessMovie[i] == letter) {		//if letter is already guessed
			model.inGame = false;                                                               
			break;
		}
		if (model.movie.find(letter) == string::npos) {		//if letter is not in the given title
			model.inGame = false;
			break;
		}
		if(model.movie[i] == letter) {					//if letter is in the title
			model.guessMovie[i] = letter;
			model.inGame = true;
		}
	}
	if(model.usedLetters.find(letter) == string::npos) model.usedLetters.push_back(letter);   // if the letter is not already in used letters, add it
}

void HangmanController::updateLives(HangmanModel& model) {
	if (!model.inGame) 
		model.lives --;
}

bool HangmanController::checkIfGameIsOver(HangmanModel& model) {
	return (model.guessMovie == model.movie) ? 0 : model.lives;
					//if number of lives equales zero or the word is guessed, game is over
}