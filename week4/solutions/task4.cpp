#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	int fact = 1;
    	int last = 0;
	cin >> n;
    	last = (2 * n) - 1;
	for(int i = 3; i <= last; i += 2) {
		fact *= i;
	}
	cout << fact << endl;

	return 0;
}
