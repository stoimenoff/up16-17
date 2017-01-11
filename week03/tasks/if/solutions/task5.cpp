#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cin >> symbol;

	if(symbol >= 'A' && symbol <= 'Z')
	{
		cout << "Uppercase letter" << endl;
	}
	else if(symbol >= 'a' && symbol <= 'z')
	{
		cout << "Lowercase letter" << endl;
	}
	else if(symbol >= '0' && symbol <= '9')
	{
		cout << "Digit" << endl;
	}
	else
	{
		cout << "Not a letter or a digit" << endl;
	}
	return 0;
}