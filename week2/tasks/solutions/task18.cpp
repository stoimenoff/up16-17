#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cin >> symbol;

	//Можем директно да сравним символа със символите 'а' и 'z'
	//Сравнението ще бъде направено между ASCII кодовете на символите
	bool isLowerCaseLetter = ((symbol >= 'a') && (symbol <= 'z'));

	bool isUpperCaseLetter = ((symbol >= 'A') && (symbol <= 'Z'));

	bool isLetter = (isLowerCaseLetter || isUpperCaseLetter);

	cout << isLetter << endl;

	return 0;
}
