#include <iostream>
using namespace std;

int main()
{

	double x, start, end;

	cin >> x >> start >> end;

	bool xIsInside = ((x >= start) && (x <= end));

	cout << xIsInside << endl;

	return 0;
}
