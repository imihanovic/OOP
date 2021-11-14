#include<iostream>
#include<vector>
#include"header4.hpp"

using namespace std;

void enterVector(vector<int>& v, int n)
{
	int e = 0;
	cout << "Enter elements of vector: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> e;
		v.push_back(e);
	}
}

void removeElement(vector<int>& v, int x)
{
	v.erase(v.begin() + x);
}

void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}