#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double maxFromAB;
	double minFromAB;
	if(a > b)
	{
		maxFromAB = a;
		minFromAB = b;
	}
	else
	{
		maxFromAB = b;
		minFromAB = a;
	}

	if(c > maxFromAB)
	{
		cout << c << " " << maxFromAB << " " << minFromAB << endl;
	}
	else
	{
		if(c < minFromAB)
		{
			cout << maxFromAB << " " << minFromAB << " " << c << endl;
		}
		else
		{
			cout << maxFromAB << " " << c << " " << minFromAB << endl;
		}
	}
	return 0;
}