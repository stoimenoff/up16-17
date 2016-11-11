#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	bool prime = true;
	cin >> n;
	for(int i = 2; i < n; i++) {
		if((n % i) == 0) {
			prime = false;
			break;
		}
	}
	cout << (prime ? "Yes" : "No") << endl;

	return 0;
}
