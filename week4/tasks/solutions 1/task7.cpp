#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int x = 0;
	int n = 0;
	int digit = 0;
	int p = 0;
	int nth = 0;
	cin >> x;
	cin >> n;
	cin >> digit;
	p =  pow(10, n - 1);
	nth = (x / p) % 10;
	cout << x + (p * (digit - nth)) << endl; 	
	
	return 0;
}
