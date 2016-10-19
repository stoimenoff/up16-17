#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	x = x ^ y;
	y = y ^ x;
	x = x ^ y;

	cout << x << endl;
	cout << y << endl;

	return 0;
}
