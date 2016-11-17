#include <iostream>
using namespace std;

int main(void) {
	int p = 0;
	int q = 0;
	int mersen = 0;
	int perfect = 0;
	cin >> p;
	cin >> q;
	for(int n = 2; true; n <<= 1) {
		mersen = n - 1;
		perfect = (mersen * (mersen + 1)) / 2;
		if(perfect > q) {
			break;
		}
		if(perfect >= p) {
			cout << perfect << ' ';
		}
	}
	cout << endl;

	return 0;
}
