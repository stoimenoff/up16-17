#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int currentNumber = 0;
	int min = 0;
	int max = 0;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> currentNumber;
		if(i == 0)
		{
			min = currentNumber;
			max = currentNumber;
		}
		else
		{
			if(min < currentNumber)
			{
				min = currentNumber;
			}
			if(max > currentNumber)
			{
				max = currentNumber;
			}
		}
	}
	cout << min << endl;
	cout << max << endl;

	return 0;
}
