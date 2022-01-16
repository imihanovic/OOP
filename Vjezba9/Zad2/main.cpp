#include "Header.h"

int main() {

	vector<Animal*>animal;
	animal.push_back(new Dove);
	animal.push_back(new Tarantula);
	animal.push_back(new Ant);
	animal.push_back(new Tarantula);

	Counter cnt;

	for (auto& a : animal) {
		cnt.sendAnimal(a);
	}

	cout << cnt.displayLegs() << endl;
}