#include <iostream>
#include <vector>
#include <algorithm>
#include "header3.hpp"

using namespace std;

void addToVector(vector<int>& v)
{
	int cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		cnt += v[i];
	}
	v.insert(v.begin(), 0);
	v.push_back(cnt);
}
void sortVector(vector<int>& v)
{
	sort(v.begin(), v.end());
}

void enterVector(vector<int>& v, int n)
{
	cout << "Enter elements of vector" << endl;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
}

void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}