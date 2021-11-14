/* Napisati funkciju koja vraca referencu na neki element niza.
Koristeci povratnu vrijednost funkcije kao lvalue uvecajte
i-ti element niza za jedan */
#include<iostream>
using namespace std;
int& returnValue(int* arr, int i)
{
	return arr[i];
}
int main()
{
	int n, x;
	cout << "Enter number of elements in array: " << endl;
	cin >> n;
	int* arr = new int[n];
	cout << "Enter elements of array: " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Enter index of element you want to change: " << endl;
	cin >> x;
	returnValue(arr, x) += 1;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	delete[]arr;
	return 0;
}