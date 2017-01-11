#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int divisor = 2;
	cin >> number;
	cout << "1";

	int possibleDivisor = 2, originalNumber = number;
	while(possibleDivisor <= originalNumber)
	{
		if(number % possibleDivisor == 0)
		{
			cout << "*" << possibleDivisor;
			number /= possibleDivisor;
		}
		else
		{
			possibleDivisor += 1;
		}
	}
	cout << endl;

	return 0;
}
