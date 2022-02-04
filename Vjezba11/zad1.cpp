#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

void inVector(const string& file, vector<int>& vec)
{
	ifstream fp;
	fp.open(file);
	if (!fp.is_open())
		throw exception();

	istream_iterator<int> it(fp);
	istream_iterator<int> eos;

	copy(it, eos, back_inserter(vec));
}

int main()
{
	vector<int> vec;

	try {
		inVector("numbers.txt", vec);
	}
	catch (const exception& e) {
		cout << "Error!!! Unable to open file! " << endl;
		return 0;
	}

	for (auto a : vec) {
		cout << a << " ";
	}
	cout << endl << endl;

	int fiveH = count_if(vec.begin(), vec.end(), [](int n) { return n > 500; });

	cout << "Number of elements greater than 500: " << fiveH << endl << endl;

	int minEl = *min_element(vec.begin(), vec.end());
	int maxEl = *max_element(vec.begin(), vec.end());
	cout << "Min element: " << minEl << "  " << "Max element: " << maxEl << endl;

	std::vector<int>::iterator it;
	it = remove_if(vec.begin(), vec.end(), [](int n) { return n < 300; });
	vec.resize(std::distance(vec.begin(), it));
	sort(vec.begin(), vec.end(), greater<int>());

	for (auto a: vec) {
		cout << a << " ";
	}

	return 0;
}