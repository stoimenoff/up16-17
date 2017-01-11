#include <iostream>
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


	double mX, mY;

	mX = (aX + bX + cX) / 3;
	mY = (aY + bY + cY) / 3;

	cout << "(" << mX << ", " << mY << ")" << endl;

	return 0;
}
