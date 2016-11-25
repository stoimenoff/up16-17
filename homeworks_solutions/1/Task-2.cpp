/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 2
 * @compiler GCC
 *
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	unsigned long long int egn = 0;
	cin >> egn;
	unsigned int year, month, day, region, genderDigit, checkDigit, century = 20;

	checkDigit = egn % 10;
	egn /= 10;

	genderDigit = egn % 10;
	egn /= 10;

	region = egn % 100;
	egn /= 100;

	day = egn % 100;
	egn /= 100;

	month = egn % 100;
	egn /= 100;

	year = egn % 100;
	egn /= 100;

	// Check if the 10th digit is correct
	int checkSum =
					(year / 10) * 2 +
					(year % 10) * 4 +
					(month / 10) * 8 +
					(month % 10) * 5 +
					(day / 10) * 10 +
					(day % 10) * 9 +
					(region / 10) * 7 +
					(region % 10) * 3 +
					genderDigit * 6;
	// % 10 because if (checkSum % 11) is 10, we need 0
	bool invalidChecksum = (checkSum % 11) % 10 != checkDigit;
	// Find the century
	if(month >= 20 && month <= 32)
	{
		century = 19;
		month -= 20;
	}
	if(month >= 40 && month <= 52)
	{
		century = 21;
		month -= 40;
	}
	// "Assemble" the year
	year = (century - 1) * 100 + year;
	// Find the maximum allowed number for the month
	int maxAllowedDay = 31;
	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		maxAllowedDay = 30;
	}
	else if(month == 2)
	{
		bool isCandidateLeap = (year % 4 == 0);
		bool isException = ((year % 4 == 0) && (year % 100 == 0) && (year % 400 != 0));
		bool leapYear = isCandidateLeap && !isException;
		maxAllowedDay = 28 + leapYear;
	}
	bool invalidDay = (day < 1 || day > maxAllowedDay);
	bool invalidMonth = (month < 1 || month > 12);

	if(invalidChecksum || invalidMonth || invalidDay)
	{
		cout << "Bad input data!" << endl;
	}
	else
	{
		cout << setw(2) << setfill('0') << day;
		cout << ".";
		cout << setw(2) << setfill('0') << month;
		cout << ".";
		cout << year << " ";
		cout << (genderDigit % 2 == 0 ? "M" : "F") << endl;
	}

	return 0;
}
