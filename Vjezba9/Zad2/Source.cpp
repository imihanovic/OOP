#include "Header.h"

Animal::~Animal() {}

int Bird::legNumber() {
	return count;
}

string Bird::species() {
	return breed;
}

void Bird::setSpecies(string s) {
	breed = s;
}

void Bird::setLegs(int n) {
	legs = n;
}

int Spider::legNumber() {
	return legs;
}

string Spider::species() {
	return breed;
}

void Spider::setSpecies(string s) {
	breed = s;
}

void Spider::setLegs(int n) {
	legs = n;
}

int Bug::legNumber() {
	return legs;
}

string Bug::species() {
	return breed;
}

void Bug::setSpecies(string s) {
	breed = s;
}

void Bug::setLegs(int n) {
	legs = n;
}

Ant::Ant() {
	setSpecies("Ant");
	setLegs(6);
}

Tarantula::Tarantula() {
	setSpecies("Tarantula");
	setLegs(8);
}

Dove::Dove() {
	setSpecies("Dove");
	setLegs(2);
}