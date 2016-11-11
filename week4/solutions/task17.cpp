#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
    	int divisor = 2;
	cin >> n;
	while(n > 1) {
		if(n % divisor == 0) {
			n /= divisor;
			cout << divisor << '*';
		} else {
			divisor++;
		}
	}
	cout << '1' << endl;

	return 0;
}
