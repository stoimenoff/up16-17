#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int x = 0;
	int p = 0;
	int n = 0;
	cin >> x;
	cin >> p;
	n =  pow(10, p - 1);
	cout << (x / n) % 10  << endl;

	return 0;
}
