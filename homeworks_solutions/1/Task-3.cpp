/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 3
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;

int main()
{
	// Naive solution
	unsigned int number = 0, sumOfPowers = 1;
	bool hasSameDigits = false;
	cin >> number;
	unsigned int lastHexDigit = number % 16;

	if(sumOfPowers * lastHexDigit == number) // 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^2 + 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^3 + 16^2 + 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^4 + 16^3 + 16^2 + 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^5 + 16^4 + 16^3 + 16^2 + 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^6 + 16^5 + 16^4 + 16^3 + 16^2 + 16^1 + 16^0
		hasSameDigits = true;
	sumOfPowers *= 16;
	sumOfPowers += 1;

	if(sumOfPowers * lastHexDigit == number) // 16^7 + 16^6 + 16^5 + 16^4 + 16^3 + 16^2 + 16^1 + 16^0
		hasSameDigits = true;

	cout << (hasSameDigits ? "Yes" : "No") << endl;

	return 0;
}
