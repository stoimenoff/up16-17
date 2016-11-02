#include <iostream>
using namespace std;

int main(void) {
	int number1 = 0;
	int number2 = 0;
	int min = 0;
	int greatestCommonDivisor = 0;
	cin >> number1;
	cin >> number2;
	min = number1 > number2 ? number2 : number1;
	for(int divisor = 2; divisor < min; ++divisor) {
		if((number1 % divisor == 0) && (number2 % divisor == 0)) {
			greatestCommonDivisor = divisor;
		}
	}
	cout << greatestCommonDivisor  << endl;

	return 0;
}
