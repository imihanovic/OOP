/* Koristeci vector napravite implementaciju igre sibica gdje korisnik igra protiv racunala. 
Pravila ove igre su vrlo jednostavna. Pred 2 igraca postavi se 21 sibica.
Igraci se izmjenjuju i uklanjaju 1, 2 ili 3 sibice odjednom. Igrac koji je prisiljen uzeti
posljednju sibicu gubi. Korisnik unosi izbor, dok se za odabir racunala bira slucajnim izborom. 
Igracu se mora dati prednost, tako da racunalo prvo zapocinje igru.
 */

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
        if ((userChoice > 3) || (userChoice < 1)) {
            cout << endl << "Invalid Entry";
            break;
        }

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