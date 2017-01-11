#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	int copyOfX = x;

	x = y;
	y = copyOfX;

	cout << x << endl;
	cout << y << endl;

	return 0;
}
