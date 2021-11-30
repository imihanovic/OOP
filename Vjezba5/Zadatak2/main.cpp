#include<iostream>
#include<time.h>
#include<random>
#include "Position.h"
#include "WeaponTarget.h"

#define L -20
#define U 20
using namespace std;

int main() {
	Weapon w;
	Target t;
	int n;
	srand(time(NULL));
	w.wPos.setRandom(L, U);

	cout << "Enter number of targets: ";
	cin >> n;
	Target* arrOfTargets = new Target[n];

	for (int i = 0; i < n; i++) {

		t.a.setRandom(L, U);
		t.g.setRandom(L, U);
		int tmp;
		if (t.g.z < t.a.z) swap(t.g.z, t.a.z);
		arrOfTargets[i] = t;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {

		if (!w.numberOf) {
			break;
		}

		w.shoot();
		if ((w.wPos.z < arrOfTargets[i].a.z) || (w.wPos.z > arrOfTargets[i].g.z)) {
			arrOfTargets[i].shot = false;
			cout << "Target missed! " << endl;
		}
		else {

			arrOfTargets[i].shot = true;
			cout << "Target shot! " << endl;
			cnt++;
		}
	}
	cout << cnt << " target(s) have been shot!" << endl;

	delete[] arrOfTargets;
	return 0;
}