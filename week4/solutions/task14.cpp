#include <iostream>
using namespace std;

int main(void) {
	int inputNumber = 0;
    int copyOfInputNumber = 0;
	int simetric = 0;
	cin >> inputNumber;
    copyOfInputNumber = inputNumber;
	for(; copyOfInputNumber > 0; copyOfInputNumber /= 10) {
        	simetric *= 10;
        	simetric += copyOfInputNumber % 10;
	}
	cout << (simetric == inputNumber ? "Yes" : "No") << endl;

	return 0;
}