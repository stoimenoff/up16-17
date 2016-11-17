#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double number = 0, epsilon = 0;
	cin >> number >> epsilon;

	double root = 1;

	while(abs(number - (root * root)) >= epsilon)
	{
		root += (number / root);
		root /= 2;
	}

	cout << setprecision(15) << root << endl;

	return 0;
}
