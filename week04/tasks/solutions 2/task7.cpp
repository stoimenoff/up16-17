#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 0;
	int n = 0;
	int digit = 0;
	int nthDigitOfX = 0;
	cin >> x;
	cin >> n;
	cin >> digit;

	int lastNDigitsOfX =  x / pow(10, n - 1);
	nthDigitOfX = lastNDigitsOfX % 10;

	int margin = digit - nthDigitOfX;
	x += (margin * pow(10, n - 1));
	cout << x << endl;

	return 0;
}
