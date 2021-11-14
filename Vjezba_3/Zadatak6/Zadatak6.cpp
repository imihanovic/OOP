#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header6.hpp"

using namespace std;

void enterVector(vector<string>& vect) {

    string str;
    while (cin >> str)
        vect.push_back(str);
}

void printVector(vector<string> vect) {
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
}
void reverseSortStr(vector<string>& vect) {
    for (size_t i = 0; i < vect.size(); i++)
        reverse(vect[i].begin(), vect[i].end());
    sort(vect.begin(), vect.end());
}