#include <iostream>
using namespace std;

int main()
{
	int vars[7];

	vars[0] = 3;
	vars[4] = vars[0];
	// vars[7] = 10; - Няма 7-ми елемент => не правим такива неща

	int anotherArray[1000];
	int n = 0;
	cin >> n;

	// cin >> anotherArray; - Не работи
	for (int i = 0; i < n; ++i)
	{
		cin >> anotherArray[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << anotherArray[i] << " ";
	}
	cout << endl;


	int initializedArray[5] = {3, 4, 50, 2, 4};
	// int initializedArray[10] = {3, 4, 50, 2, 4}; - последните 5 елемента
	// ще бъдат запълнени със стойността по подразбиране на типа данни -
	// в случая 0
	// int initializedArray[] = {3, 4, 50, 2, 4}; - 5 елемента

	return 0;
}
