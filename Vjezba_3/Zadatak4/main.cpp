#include <iostream>
#include <vector>
#include "header4.hpp"

using namespace std;

int main()
{
	int x, n;
	vector <int> v;
	cout << "Enter number of elements in vector: " << endl;
	cin >> n;
	enterVector(v, n);
	cout << "Enter index of element you want to remove." << endl;
	cin >> x;
	remove_element(v, x, n);
	printVector(v);
	return 0;
}