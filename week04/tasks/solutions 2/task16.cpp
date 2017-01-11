#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int search = 0;
	int find = 0;
	bool found = false;
	cin >> search;
	cin >> find;

	// Намираме броя на цифрите на find
	int findCopy = find, digits = 0;
	while(findCopy > 0)
	{
		digits += 1;
		findCopy /= 10;
	}
	if(find == 0)
	{
		digits = 1;
	}

	int lastDigitsOfSearch = 0, power = pow(10, digits);
	while(search >= power)
	{
		// Взимаме съответния брой последни цифри на search
		lastDigitsOfSearch = search % power;
		if(lastDigitsOfSearch == find)
		{
			found = true;
			break;
		}
		/* Отрязваме последната цифра, за да може нa следващата итерация
		   да вземем предишните цифри.*/
		search /= 10;
	}

	if(found)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}
