/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 1
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;

int main()
{
	unsigned int number = 0;
	cin >> number;

	if(number < 1 || number > 3000)
	{
		cout << "Invalid number!";
	}
	else
	{
		// Digit numbering back to front
		int firstDigit, secondDigit, thirdDigit, fourthDigit;
		firstDigit = number % 10;
		number /= 10;
		secondDigit = number % 10;
		number /= 10;
		thirdDigit = number % 10;
		number /= 10;
		fourthDigit = number % 10;
		number /= 10;

		switch(fourthDigit)
		{
			case 1: cout << "M"; break;
			case 2: cout << "MM"; break;
			case 3: cout << "MMM"; break;
		}
		switch(thirdDigit)
		{
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}
		switch(secondDigit)
		{
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}
		switch(firstDigit)
		{
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
	}
	cout << endl;

	return 0;
}
