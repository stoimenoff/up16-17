#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	int nThMinusOne = 0;
    	int nTh = 1;
    	int nThPlusOne = 0;
	cin >> n;
    	for(int i = 1; i < n; ++i) {
        	nThPlusOne = nThMinusOne + nTh;
        	nThMinusOne = nTh;
        	nTh = nThPlusOne;
    	}
	cout << nTh << endl;

	return 0;
}
