#include "Model.h"
#include "Controller.h"
#include "View.h"
#include <iostream>
#include <string>
using namespace std;

void HangmanView::displayUsedLetters(HangmanModel& model) {
    cout << "Movie: " << model.guessMovie << endl << endl;
    cout << "Used letters:" << endl;
    cout << model.usedLetters;
    cout << endl;
}

void HangmanView::displayHangman(HangmanModel& model) {
    switch (model.lives) {
    case 8:
        cout << "________" << endl;
        cout << "| /" << endl;
        cout << "|/" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 7:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 6:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 5:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|    |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 4:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 3:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 2:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|    |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 1:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|    |" << endl;
        cout << "|   /" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl;
        break;
    case 0:
        cout << "________" << endl;
        cout << "| /  |" << endl;
        cout << "|/   O" << endl;
        cout << "|   /|\\" << endl;
        cout << "|    |" << endl;
        cout << "|   / \\" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|_______" << endl << endl;
        break;
    }
}

void HangmanView::displayCurrentProgress(HangmanModel& model) {
    if (model.guessMovie == model.movie) {
        cout << endl << "Winner!" << endl;
    }
    else if (model.lives == 0) {
        cout << endl << endl << "Game over!" << endl;
    }
    else {
        cout << endl << "Enter letter:  ";
    }
}
