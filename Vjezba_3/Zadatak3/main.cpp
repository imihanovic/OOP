#include <iostream>
#include <vector>
#include <algorithm>
#include "Header3.hpp"

using namespace std;

int main()
{
	int n;
	vector <int> v;

	cout << "Enter number of elements for first vector: " << endl;
	cin >> n;
	enterVector(v, n);
	sortVector(v);
	addToVector(v);
	printVector(v);

	return 0;
}