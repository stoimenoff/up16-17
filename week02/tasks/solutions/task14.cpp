#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//Раделяме числото на цифри
	int fourthDigit = number % 10;
	number /= 10; // съкратен запис за number = number / 10;

	int thirdDigit = number % 10;
	number /= 10;

	int secondDigit = number % 10;
	number /= 10;

	int firstDigit = number % 10;
	number /= 10;

	bool isPalindrome = ((firstDigit == fourthDigit) && (secondDigit == thirdDigit));

	cout << isPalindrome << endl;

	return 0;
}
