#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
	virtual int legNumber() = 0;
	virtual string species() = 0;
	virtual ~Animal();
};

class Bug : public Animal {
	string breed;
	int legs;

public:
	int legNumber();
	string species();
	void setSpecies(string s);
	void setLegs(int n);
};

class Ant : public Bug {
public:
	Ant();
};

class Spider : public Animal {
	string breed;
	int legs;

public:
	int legNumber();
	string species();
	void setSpecies(string s);
	void setLegs(int n);
};

class Tarantula : public Spider {
public:
	Tarantula();
};

class Bird : public Animal {
	string breed;
	int legs;

public:
	int legNumber();
	string species();
	void setSpecies(string s);
	void setLegs(int n);
};

class Dove : public Bird {
public:
	Dove();
};


class Counter {
private:
	int legs = 0;
public:
	void sendAnimal(Animal* animal) {
		cout << "Dodan: " << animal->species() << endl;
		legs += animal->legNumber();
	};

	int displayLegs() {
		return legs;
	}
};
