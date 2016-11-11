#include <iostream>
using namespace std;

int main(void) {
	int inputNumber = 0;
	int sum = 0;
	int prod = 1;
	while(1) {
		cin >> inputNumber;
		if(inputNumber != 0) {
			sum += inputNumber;
			prod *= inputNumber;
		} else {
			break;
		}		
	}
	cout << "Sum: " << sum << endl;
	cout << "Prod: " << prod << endl;

	return 0;
}
