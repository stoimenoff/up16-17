#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int factorial = 1;
	cin >> n;
	for(int i = 1; i <= n; i += 1)
	{
		factorial *= i;
	}
	cout << factorial << endl;

	return 0;
}
