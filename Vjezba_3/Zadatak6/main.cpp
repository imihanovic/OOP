/*Napisite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
svaki string preokrene te sortira vektor po preokrenutim stringovima*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header6.hpp"

using namespace std;

int main()
{
    vector<string> vect;
    enterVector(vect);
    reverseSortStr(vect);
    printVector(vect);
}