#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int number1 = 0;
	int number2 = 0;
	int min = 0;
	int greatestCommonDivisor = 0;
	cin >> number1;
	cin >> number2;
	if(number1 < 0) {
		number1 = -number1;
	}
	if(number2 < 0) {
		number2 = -number2;
	}
	min = number1 > number2 ? number2 : number1;
	for(int divisor = 2; divisor < min; ++divisor) {
        	if((number1 % divisor == 0) && (number2 % divisor == 0)) {
            		greatestCommonDivisor = divisor;
        	}
    	}
	cout << (number1 * number2) / greatestCommonDivisor  << endl;

	return 0;
}
