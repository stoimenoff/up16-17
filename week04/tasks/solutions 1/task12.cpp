#include <iostream>
using namespace std;

int main(void) {
	int inputNumber = 0;
	int square = 0;
    	bool automorphNumber = true;
	cin >> inputNumber;
    	square = inputNumber * inputNumber;
	for(; inputNumber > 0; inputNumber /= 10, square /= 10) {
        	if((inputNumber % 10) != (square % 10)) {
                	automorphNumber = false;
                	break;
            	}
	}
    	cout << (automorphNumber ? "Yes" : "No") << endl;

	return 0;
}
