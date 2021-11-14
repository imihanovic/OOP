/*Napisati funkciju koja broji koliko pojavljivanja danog podstringa ima u stringu koristeci funkcije standardne biblioteke.*/
#include <iostream>
#include <string>
#include "header5.hpp"

using namespace std;

int main()
{
    int cnt;
    string str = "nanabana nabanana banananana";
    string substr = "banana";

    cnt = strInStr(str, substr);
    cout << "Number of repetition: " << cnt << endl;
}