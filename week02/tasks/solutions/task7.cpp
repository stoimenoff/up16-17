#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double p = (a + b + c) / 2;

	double area = sqrt( p * (p - a) * (p - b) * (p - c) );

	cout << area << endl;

	return 0;
}
