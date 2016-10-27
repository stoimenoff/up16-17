#include <iostream>
#include <cmath>

using namespace std;

int main(){
	unsigned int number;
	cout << "Enter a positive number: ";
	cin >> number;
	
	bool isPrime = true;
	for (int divisor = 2; divisor <= sqrt(number); divisor++)
	{
		if (number % divisor == 0)
		{
			isPrime = false;
		}
	}

	if(isPrime && number > 1)
	{
		cout << "The number is prime" << endl;
	}
	else
	{
		cout << "The number is not prime" << endl;
	}
	return 0;
}