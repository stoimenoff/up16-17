#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double aX, aY, bX, bY;

	cout << "Enter the coordinates of the first point: ";
	cin >> aX >> aY;

	cout << "Enter the coordinates of the second point: ";
	cin >> bX >> bY;

	double xDistance = aX - bX;
	double yDistance = aY - bY;

	double distance = sqrt(xDistance * xDistance + yDistance * yDistance);

	cout << distance << endl;

	return 0;
}
