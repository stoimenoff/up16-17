#include <iostream>
using namespace std;

int main()
{
	int number = 0, numberOfDigits = 0;
	cin >> number;
	while(number > 0)
	{
		numberOfDigits += 1;
		number /= 10;
	}
	cout << numberOfDigits << endl;

	return 0;
}
