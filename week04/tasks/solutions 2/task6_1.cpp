#include <iostream>
using namespace std;

int main()
{
	//без използване на cmath (повдигане на 10 на степен)
	int x = 0;
	int p = 0;
	cin >> x;
	cin >> p;

	for (int i = 0; i < p - 1; i++)
	{
		x /= 10;
	}
	cout << x % 10 << endl;

	return 0;
}
