#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int symetric = 0;
	cin >> number;
	while(number > 0)
	{
		// "Залепяме" последната цифра на числото за симетричното...
		symetric *= 10;
		symetric += (number % 10);
		// ...и я "отрязваме" от числото
		number /= 10;
	}

	cout << symetric << endl;
	return 0;
}
