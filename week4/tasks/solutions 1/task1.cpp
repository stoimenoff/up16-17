#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	int inputNumber = 0;
	int min = 0;
	int max = 0;
	cin >> n;
	for(int i  = 0; i < n; ++i) {
		cin >> inputNumber;
		if(i == 0) {
			min = inputNumber;
			max = inputNumber;
		} else {
			if(min < inputNumber) {
				min = inputNumber;
			}
			if(max > inputNumber) {
				max = inputNumber;
			}
		}
	}
	cout << min << ' ' << max << endl;

	return 0;
}
