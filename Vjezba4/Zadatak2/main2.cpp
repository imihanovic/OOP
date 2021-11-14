/* Napisati funkciju koji prevodi engleske recenice na pig latin jezik. Pravila su sljedeca:
(a) ako rijec pocinje samoglasnikom dopisuje se hay na kraj rijeci,
(b) inace, svi suglasnici s pocetka rijeci prebacuju se na kraj te se na kraju rijeci
dopisuje ay.
Recenice treba spremiti u vector, a zatim prevesti slucajno odabranu recenicu iz
vektora.
Primjer: ”What time is it?” prevodi se kao ”atwhay imetay ishay ithay?” */
#include<iostream>
#include<string>
#include <vector>

using namespace std;

int main() {
	vector<string> stringVector;
	string str;
	int n;
	cout << "Enter number of sentences: " << endl;
	cin >> n;
	for (int i = 0; i < n+1; i++) {
		getline(cin, str);
		stringVector.push_back(str);
	}
}