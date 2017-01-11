#include <iostream>
using namespace std;

int main(void) {
	int search = 0;
    	int find = 0;
    	int copyOfFind = 0;
    	bool found = false;
    	cin >> search;
    	cin >> find;
    	copyOfFind = find;
    	for(; search > 0; search /= 10) {
		if((search % 10) == (copyOfFind % 10)) {
            		copyOfFind /= 10;
            		if(copyOfFind == 0) {
                		found = true;
            		}
        	} else {
            		copyOfFind = find;
        	}
	}
    	cout << (found ? "Yes" : "No") << endl;

	return 0;
}
