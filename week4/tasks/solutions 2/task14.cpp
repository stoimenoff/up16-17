#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	cin >> number;
	// Намираме симетричното число и проверяваме дали е равно на въведеното
	int symetric = 0, copyOfNumber = number;
	while(copyOfNumber > 0)
	{
		symetric *= 10;
		symetric += (copyOfNumber % 10);
		copyOfNumber /= 10;
	}

	if(symetric == number)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}
