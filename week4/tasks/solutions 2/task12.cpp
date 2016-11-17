#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int number = 0;
	cin >> number;
	unsigned int square = number * number;

	// Намираме броя на цифрите на числото
	unsigned int copyOfNumber = number, digits = 0;
	while(copyOfNumber > 0)
	{
		digits += 1;
		copyOfNumber /= 10;
	}
	// Взимаме съответния брой цифри от квадрата на числото
	unsigned int lastDigitsOfSquare = square % (int)pow(10, digits);

	if(lastDigitsOfSquare == number)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}
