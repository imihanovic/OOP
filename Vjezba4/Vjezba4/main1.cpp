/* 
Primjer: Za recenicu ”Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .”,
Ispravna recenica glasi: ”Ja bih, ako ikako mogu, ovu recenicu napisala ispravno.”.
 */

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

bool isSpace(char x, char y) {
	return (x == y && x == ' ');
}

void grammar(string& correct,string str) {

	auto space = unique(str.begin(), str.end(), isSpace);
	int n = space - str.begin();

	for (int i = 0; i < n;i++) {
		if (str[i] == ' ') {
			if (ispunct(str[i + 1])) {
				correct.push_back(str[++i]);
				if(str[i+1]!=' ')
					correct.push_back(' ');
			}
			else if (isalpha(str[i + 1]))
				correct.push_back(str[i]);
				correct.push_back(str[++i]);
		}
		else if (ispunct(str[i]) && isalpha(str[i + 1])) {
			correct.push_back(str[i]);
			correct.push_back(' ');
		}
		else correct.push_back(str[i]);
	}
}

int main() {

	string str,correct;
	cout << "Enter a sentence: "<< endl;
	getline(cin ,str);
	grammar(correct, str);
	cout << "Correct: " << correct;
	return 0;
}