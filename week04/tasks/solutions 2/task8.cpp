#include <iostream>
using namespace std;

int main()
{
	unsigned int firstNumber = 0;
	unsigned int secondNumber = 0;
	cin >> firstNumber;
	cin >> secondNumber;

	/* Използваме опростения алогиртъм на Евклид за положителни числа:
		Ако двете числа са равни, най-големия общ делител са самите те
		Ако не са равни, то от по-голямото изваждаме по-малкото и намираме
		НОД на новополученото число и по-макото от оригиналните две.
	*/
	while(firstNumber != secondNumber)
	{
		if(firstNumber > secondNumber)
		{
			firstNumber -= secondNumber;
		}
		else
		{
			secondNumber -= firstNumber;
		}
	}
	cout << firstNumber  << endl;

	return 0;
}
