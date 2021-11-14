#include <iostream>
#include <vector>
#include <algorithm>
#include "header2.hpp"

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

void create_vector(vector<int>& v, vector<int> first, vector<int> second)
{
	int f = 0, s = first.size();

	for (int i = 0; i < s; i++)
	{
		if (!(find(second.begin(), second.end(), first[i]) != second.end()));
		else
			v.push_back(first[i]);
	}
}

void print_vector(vector<int> v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
		cout << v[i] << " ";
}