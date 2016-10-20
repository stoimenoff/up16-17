#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double aX, aY, bX, bY, cX, cY;

	cout << "Enter the coordinates of the first point: ";
	cin >> aX >> aY;

	cout << "Enter the coordinates of the second point: ";
	cin >> bX >> bY;

	cout << "Enter the coordinates of the second point: ";
	cin >> cX >> cY;


	double a = sqrt((bX - cX) * (bX - cX) + (bY - cY) * (bY - cY));
	double b = sqrt((aX - cX) * (aX - cX) + (aY - cY) * (aY - cY));
	double c = sqrt((aX - bX) * (aX - bX) + (aY - bY) * (aY - bY));
	double p = (a + b + c) / 2;

	double area = sqrt( p * (p - a) * (p - b) * (p - c) );

	cout << area << endl;

	return 0;
}
