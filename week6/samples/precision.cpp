#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double eps = 1e-3; // - precision
	double x = 0;
	double y = 0;
	cin >> x >> y;

	// if(x == y) - bad idea
	if(abs(x - y) < eps)
		cout << "x == y" << endl;
	else
		cout << "x != y" << endl;

	//if(x < y) - bad idea
	if(x <= (y - eps))
		cout << "x < y" << endl;

	//if(x > y) - bad idea
	if(x >= y + eps)
		cout << "x > y" << endl;

	return 0;
}
