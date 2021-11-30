#include<iostream>
#include <random>
#include "Model.h"
#include "Controller.h"
#include "View.h"

using namespace std;
int main()
{
	srand(time(NULL));
	HangmanModel hangman;
	HangmanController controller;
	HangmanView view;
	while (controller.checkIfGameIsOver(hangman)) {
		view.displayHangman(hangman);
		cout << endl;
		view.displayUsedLetters(hangman);
		view.displayCurrentProgress(hangman);
		controller.userEntry(hangman);
		controller.updateLives(hangman);
		system("cls");
	}
	view.displayHangman(hangman);
	cout << endl;
	view.displayUsedLetters(hangman);
	view.displayCurrentProgress(hangman);
}


