#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	cin >> n;
	for(int i = 2; i <= n; i <<= 1) {
		cout << i - 1 << ' ';
	}
	cout << endl;

	return 0;
}
