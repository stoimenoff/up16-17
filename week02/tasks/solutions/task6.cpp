#include <iostream>
using namespace std;

int main()
{
	double a, b, c;

	cin >> a >> b >> c;

	bool areValidTriangleSides = ((a + b > c) && (a + c > b) && (b + c > a));

	cout << areValidTriangleSides << endl;

	return 0;
}
