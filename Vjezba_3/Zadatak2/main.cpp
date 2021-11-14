#include <iostream>
#include <vector>
#include <algorithm>
#include "header2.hpp"
using namespace std;

int main()
{
	int n, m;

	vector <int> v;
	vector <int> first;
	vector <int> second;

	cout << "Enter number of elements for first vector: " << endl;
	cin >> n;
	enter_vector1(first, n);

	cout << "Enter number of elements for second vector: " << endl;
	cin >> m;
	enter_vector1(second, m);

	create_vector(v, first, second);
	print_vector(v);


	return 0;
}