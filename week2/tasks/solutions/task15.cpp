#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a, b, c;

	double discriminant = b * b - 4 * a * c;

	bool hasRealRoots = (discriminant >= 0);

	cout << hasRealRoots << endl;

	return 0;
}
