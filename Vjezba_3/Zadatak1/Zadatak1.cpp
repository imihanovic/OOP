#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

void enter_vector1(vector<int>& v, int n)
{
	cout << "Enter elements of vector" << endl;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
}

void enter_vector2(vector<int>& v, int l, int u) // l->lower limit, u-> upper limit
{
	int x;
	cout << "Enter elements of vector in given range: " << endl;
	cin >> x;
	while ((x < u) && (x > l))
	{
		v.push_back(x);
		cin >> x;
	}
}

void print_vector(vector<int> v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
		cout << v[i] << " ";
}