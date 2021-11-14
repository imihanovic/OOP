#include <iostream>
#include <string>
#include "header34.hpp"

using namespace std;

int main()
{
	string binary;
	char bin;
	cout << "Enter bits:" << endl;

	while (cin >> bin) {
		if ((bin != '1') && (bin != '0')) {
			cout << "Not a bit! " << endl;
			break;
		}
		binary.push_back(bin);
	}

	stuffing_bit(binary, binary.size());
	cout << endl << "Stuffing_bit: " << endl;
	print(binary, binary.size());

	unstuffing_bit(binary, binary.size());
	cout << endl << "Unstuffing_bit: " << endl;
	print(binary, binary.size());
}