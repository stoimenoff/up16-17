#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if(a*a + b*b == c*c)
	{
		cout << "Yep" << endl;
	}
	else if(a*a + c*c == b*b)
	{
		cout << "Yep" << endl;
	}
	else if(b*b + c*c == a*a)
	{
		cout << "Yep" << endl;
	}
	else
	{
		cout << "Nop" << endl;
	}

	return 0;
}