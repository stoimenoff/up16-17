#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if(a < b)
	{
		a *= 7;
		b -= 23;
	}
	else
	{
		b *= 7;
		a -= 23;	
	}

	cout << a << endl;
	cout << b << endl;

	return 0;
}