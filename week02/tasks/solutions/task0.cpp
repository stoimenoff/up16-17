#include <iostream>
using namespace std;

int main()
{
	double celsius, fahrenheit;

	//Въвеждаме температурата по Целзий
	cin >> celsius;

	//пресмятаме температурата по Фаренхайт...
	fahrenheit = celsius * 1.8 + 32;

	//...и я извеждаме на екрана
	cout << fahrenheit << endl;
	return 0;
}
