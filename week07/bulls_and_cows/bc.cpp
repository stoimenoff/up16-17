#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


int inputDigits()
{
	int digits = 0;
	do
	{
		cin >> digits;
	}
	while(digits < 1 || digits > 10);
	return digits;
}

int randomDigit()
{
	return rand() % 10;
}

int randomNonZeroDigit()
{
	return rand() % 9 + 1;
}

int selectNumber(int digits)
{
	int number = randomNonZeroDigit();
	for (int i = 0; i < digits - 1; ++i)
	{
		number *= 10;
		number += randomDigit();
	}
	return number;
}

int numberOfDigits(int n)
{
	int digits = 0;
	do
	{
		n /= 10;
		digits += 1;
	}
	while (n > 0);
	return digits;
}

int isValid(int guess, int digits)
{
	return numberOfDigits(guess) == digits;
}

int numberOfBulls(int number, int guess)
{
	int bulls = 0;
	while(number > 0)
	{
		if(number % 10 == guess % 10)
		{
			bulls += 1;
		}
		number /= 10;
		guess /= 10;
	}
	return bulls;
}

int occurrencesOfDigit(int digit, int number)
{
	int occurrences = 0;
	while(number > 0)
	{
		if(number % 10 == digit)
		{
			occurrences += 1;
		}
		number /= 10;
	}
	return occurrences;
}


int numberOfCows(int number, int guess) // TODO need fix
{
	int bulls = numberOfBulls(number, guess);
	int cowsPlusBulls = 0;
	int occInGuess = 0, occInNumber = 0;
	for (int digit = 1; digit < 10; ++digit)
	{
		occInGuess = occurrencesOfDigit(digit, guess);
		if(occInGuess > 0)
		{
			occInNumber = occurrencesOfDigit(digit, number);
			cowsPlusBulls += ((occInNumber < occInGuess) ? occInNumber : occInGuess);
		}
	}
	return cowsPlusBulls - bulls;
}

int main()
{
	srand(time(0));
	int digits = inputDigits();
	int number = selectNumber(digits);
	cerr << number << endl;
	int guess = 0;
	do
	{
		cin >> guess;
		if(isValid(guess, digits))
		{
			cout << "Bulls: " << numberOfBulls(number, guess) << endl;
			cout << "Cows: " << numberOfCows(number, guess) << endl;
		}
		else
		{
			cout << "Invalid guess! I WILL IGNORE IT!" << endl;
		}
	} while (guess != number);

	return 0;
}
