#include <iostream>
#include <vector>
#include <time.h>
#include <random>

using namespace std;

void printMatches(vector<char> matchBox, int n) {
    cout << endl << "There are currently " << n << " matches:" << endl;
    for (int i = 0; i < n; i++) {
        cout << matchBox[i] << " ";
    }
}
void popBackMatches(vector<char>& matchBox, int n) {
    for (int i = 0; i < n; i++) {
        matchBox.pop_back();
    }
}
bool checkChoice(int userChoice, int compChoice) {
    if ((userChoice > 3) || (userChoice < 1)) cout << endl << "Invalid Entry";
}
int main()
{
    srand(time(NULL));
    vector<char> box(21, '|');
    int count = box.size();
    int userChoice = NULL, compChoice;
    bool winner = false;

    printMatches(box, count);

    while (count > 1) {


        if (count < 5) {
            compChoice = (count - 1);
        }
        /*
        else if (!userChoice) {
            compChoice = (rand() % 3) + 1;
        }*/
        else {
            compChoice = (rand() % 3) + 1;
        }

        winner = false;
        cout << endl << endl << "Computer picks " << compChoice << " match sticks." << endl;

        popBackMatches(box, compChoice);
        count -= compChoice;
        printMatches(box, count);

        if (count == 1) break;

        cout << endl << endl << "Pick up the match sticks (1-3): ";
        cin >> userChoice;
        winner = true;
        checkChoice(userChoice, compChoice);

        popBackMatches(box, userChoice);
        count -= userChoice;
        printMatches(box, count);

        count = box.size();
    }
    cout << endl;

    if (!winner && (count == 1)) {
        cout << endl << "Loser!";
    }
    else {
        cout << endl << "Winner!";
    }
}