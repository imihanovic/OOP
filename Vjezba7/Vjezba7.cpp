#include <iostream>
#include <cmath>
#include "header.h"
using namespace std;
void Board::allocateMatrix(int rows, int cols) {

	matrix = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new char[cols];
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = (j == 0 || j == cols - 1 || i == 0 || i == rows - 1) ? 'o' : ' ';
		}
	}
}

Board::Board() {						//default constructor
	rows = 20;
	cols = 20;
	allocateMatrix(rows, cols);
}

Board::~Board() {						//destructor
	rows = 0;
	cols = 0;
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

Board::Board(int rows, int cols) {		
	this->rows = rows;
	this->cols = cols;

	allocateMatrix(rows, cols);
}

Board::Board(const Board& board) {		// copy constructor
	rows = board.rows;
	cols = board.cols;

	matrix = new char* [rows];

	for (int i = 0; i < rows; i++)
		matrix[i] = new char[cols];

	memcpy(matrix, board.matrix, cols * sizeof(rows));		
}

Board::Board(Board&& board)				// move constructor
{
	rows = board.rows;
	cols = board.cols;
	matrix = board.matrix;

	board.matrix = nullptr;
	board.cols = 0;
	board.rows = 0;
}
// round - circles value of double
void Board::draw_char(Point& point, char ch) {

	int row = round(point.getX());		
	int column = round(point.getY());
	matrix[row][column] = ch;
}

void Board::draw_up_line(Point& point, char ch) {
	int row = round(point.getX());
	int column = round(point.getY());
	for (int r = 1; r < row; r++) {
		matrix[r][column] = ch;
	}
}

void Board::draw_line(Point& point1, Point& point2, char ch) {

	int x1 = round(point1.getX());
	int y1 = round(point1.getY());
	int x2 = round(point2.getX());
	int y2 = round(point2.getY());

	if (0 > x1 || x1 > cols || 0 > x2 || x2 > cols || 0 > y1 || y1 > rows || 0 > y2 || y2 > rows) {
		cout << "Wrong dimensions of point." << endl;
		return;
	}
	if (x1 == x2 && y1 == y2) {
		matrix[x1][y1] = ch;
	}

	else if (x1 > x2) {
		swap(x1, x2);
		swap(y1, y2);
	}

	while (x1 != x2 || y1 != y2) {

		int r = y1;
		int c = x1;
		matrix[r][c] = ch;

		if (x1 == x2 && y1 != y2)
			y1++;
		else if (x1 != x2 && y1 != y2)
			x1++, y1++;
		else if (x1 != x2 && y1 == y2)
			x1++;
	}
}

void Board::display()
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}