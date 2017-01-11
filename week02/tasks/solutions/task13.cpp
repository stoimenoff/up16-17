#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//Раделяме числото на цифри
	int lastDigit = number % 10;
	number = number / 10;
	int middleDigit = number % 10;
	number = number / 10;
	int firstDigit = number % 10;

	bool isAscending = ((firstDigit < middleDigit) && (middleDigit < lastDigit));
	bool isDescending = ((firstDigit > middleDigit) && (middleDigit > lastDigit));

	cout << isAscending << endl;
	cout << isDescending << endl;

	return 0;
}
