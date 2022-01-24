#include "Header.h"
#include <iostream>
using namespace std;

int main() {
	Stack<int> intStack(4);
	intStack.push(6);
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.print();
	cout << endl;
	intStack.isEmpty() ? cout << "Array is not empty!" : cout << "Array is empty!";
	cout << endl;
	for (int i = 0; i < 4; i++) {
		intStack.pop();
	}
	/*
	cout << endl;
	intStack.print();
	intStack.isEmpty() ? cout << "Not empty!" << endl : cout << "Empty!" << endl;
	*/
	return 0;
}