#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	bool prime = true;
	cin >> n;
	for(int possibleDivisor = 2; possibleDivisor < n; possibleDivisor++)
	{
		if(n % possibleDivisor == 0)
		{
			prime = false;
			break;
		}
	}
	if(prime)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
