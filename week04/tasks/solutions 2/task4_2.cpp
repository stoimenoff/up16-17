#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int doubleFactorial = 1;
	cin >> n;
	for(int i = 1; i <= 2 * n - 1; i += 2)
	{
		doubleFactorial *= i;
	}
	cout << doubleFactorial << endl;

	return 0;
}
