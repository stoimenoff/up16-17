#include <iostream>
using namespace std;

int main()
{
	unsigned int firstNumber = 0;
	unsigned int secondNumber = 0;
	cin >> firstNumber;
	cin >> secondNumber;

	// Наивно решение
	for (int candidate = firstNumber; candidate <= firstNumber * secondNumber; candidate++)
	{
		if(candidate % firstNumber == 0 && candidate % secondNumber == 0)
		{
			cout << candidate << endl;
			break;
		}
	}

	return 0;
}
