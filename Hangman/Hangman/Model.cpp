#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Model.h"
using namespace std;

HangmanModel::HangmanModel() {
	int randMovie, totalMovies, sizeMovie;
	ifstream infile("movie.txt");
	vector<string> vecMovies;
	string letter;

	while (getline(infile, movie))
	{
		vecMovies.push_back(movie);
	}

	totalMovies = vecMovies.size();
	randMovie = rand() % totalMovies + 1;

	movie = vecMovies[randMovie];
	sizeMovie = movie.size();

	for (int i = 0; i < sizeMovie; i++) {
		movie[i] = toupper(movie[i]);
	}

	for (int i = 0; i < sizeMovie; i++) {
		if (isspace(movie[i])) {
			guessMovie.push_back(' ');
		}
		else {
			guessMovie.push_back('_');
		}
	}

}
