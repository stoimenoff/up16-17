#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//Взимаме последната цифра
	int lastDigit = number % 10;

	//Делим числото на 10, като по този начин "отрязваме"" последната му цифра,
	//която вече сме запазили в lastDigit
	number = number / 10;

	//Понеже сме "срязали" числото, цифрата която в момента е последна,
	//преди това е била предпоследна.
	int middleDigit = number % 10;

	//Отново "режем" последната цифра на числото
	number = number / 10;

	int firstDigit = number % 10;
	//Обърнете внимание, че ако числото е едноцифрено, то остатъкът при деление на 10 е самото число.

	cout << firstDigit + middleDigit + lastDigit << endl;

	return 0;
}
