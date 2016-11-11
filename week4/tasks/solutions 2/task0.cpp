#include <iostream>
using namespace std;

int main()
{
	int currentNumber = 0;
	int sum = 0;
	int product = 1;

	cin >> currentNumber;
	while(currentNumber != 0)
	{
		sum += currentNumber;
		product *= currentNumber;
		cin >> currentNumber;
	}
	cout << sum << endl;
	cout << product << endl;

	return 0;
}
