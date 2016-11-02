#include <iostream>
using namespace std;

int main(void) {
	int inputNumber = 0;
	int simetric = 0;
	cin >> inputNumber;
	for(; inputNumber > 0; inputNumber /= 10) {
        	simetric *= 10;
        	simetric += inputNumber % 10;
	}
	cout << simetric << endl;

	return 0;
}
