#include <iostream>
using namespace std;

int main()
{
	int years;
	//Въвеждаме годините
	cin >> years;

	//Използваме възможно най-големия тип данни за цели положителни числа,
	//защото числото със секундите може да стане доста голямо.
	unsigned long long int days, hours, seconds;

	//извършваме съответните пресмятания
	days = years * 365;
	hours = days * 24;
	seconds = hours * 3600;

	cout << "days: " << days << endl;
	cout << "hours: " << hours << endl;
	cout << "seconds: " << seconds << endl;

	return 0;
}
