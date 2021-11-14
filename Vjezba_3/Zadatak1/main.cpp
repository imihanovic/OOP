#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main()
{
	int n, x, y;
	vector <int> v1;
	vector <int> v2;

	cout << "Enter number of elements: " << endl;
	cin >> n;
	enter_vector1(v1, n);

	cout << "Enter lower and upper range of elements: " << endl;
	cin >> x;
	cin >> y;
	enter_vector2(v2, x, y);

	print_vector(v1);
	cout << endl;
	print_vector(v2);

	return 0;
}