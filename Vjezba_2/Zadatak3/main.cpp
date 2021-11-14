#include<iostream>
using namespace std;
struct point
{
	int x, y;
};
struct pravokutnik
{
	point dl;
	point ur;

};
struct kruznica
{
	unsigned r;
	int x, y;

	void newCir()
	{
		cout << "Enter radius and coordinates of center: " << endl;
		cin >> r;
		cin >> x;
		cin >> y;
	}
};
pravokutnik* newRectangle(int N)
{
	pravokutnik* rectangle = new pravokutnik[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Enter coordinates for down left point: " << endl;
		cin >> rectangle[i].dl.x;
		cin >> rectangle[i].dl.y;
		cout << "Enter coordinates for upper right point: " << endl;
		cin >> rectangle[i].ur.x;
		cin >> rectangle[i].ur.y;
	}
	return rectangle;
}
bool intersect(int dlY, int dlX, int urX, int urY, int cX, int cY, int cR)
{
	int nearX = max(dlX, min(urX, cX));
	int nearY = max(dlY, min(urY, cY));
	if (((nearX - cX) * (nearX - cX) + (nearY - cY) * (nearY - cY)) <= cR * cR)
		return true;
	return false;
}
int numOfInter(const pravokutnik* (&rectangle), const kruznica& cir, int N)
{
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (intersect(rectangle[i].dl.y, rectangle[i].dl.x, rectangle[i].ur.x, rectangle[i].ur.y, cir.x, cir.y, cir.r))
			cnt++;
	}
	return cnt;
}
int main()
{
	kruznica cir;
	const pravokutnik* rectangle;
	int N;
	cout << "Enter number of rectangles: \n" << endl;
	cin >> N;

	cir.newCir();
	rectangle = newRectangle(N);
	/*
	rectangle->dr.x = rectangle->ur.x;
	rectangle->dr.y = rectangle->dl.y;
	rectangle->ul.x = rectangle->dl.x;
	rectangle->ul.y = rectangle->ur.x;
	*/

	cout << numOfInter(rectangle, cir, N);
	delete[] rectangle;
	return 0;
}