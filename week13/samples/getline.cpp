#include <iostream>

using namespace std;

int main()
{
	const int MAX_SIZE = 30;
	char text[MAX_SIZE];

	cin.getline(text, MAX_SIZE);

	cout << text << endl;

	for (int i = 0; i < MAX_SIZE; ++i)
	{
		cout << "text[" << i << "] = '" << text[i] << "'" << endl;
	}

	for (int i = 0; i < MAX_SIZE; ++i)
	{
		cout << "ASCII code of text[" << i << "] is " << (unsigned int)text[i] << endl;
	}
	return 0;
}
