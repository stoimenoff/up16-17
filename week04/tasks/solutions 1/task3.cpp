#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	int count = 0;
	cin >> n;
	for(; n > 0; n /= 10) {
		count++;
	}
	cout << count << endl;

	return 0;
}
