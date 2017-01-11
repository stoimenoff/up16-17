#include <iostream>
using namespace std;

int main(void) {
	int search = 0;
    	int digit = 0;
    	bool found = false;
    	cin >> search;
    	cin >> digit;
    	for(; search > 0; search /= 10) {
		if((search % 10) == digit) {
			found = true;
        	}
	}
    	cout << (found ? "Yes" : "No") << endl;

	return 0;
}
