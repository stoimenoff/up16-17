#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int MAX_SIZE = 20;

	char text[MAX_SIZE] = {'b', 'a', 'b', 'a', ' ', 'i', ' ', 'd', 'y', 'a', 'd', 'o', '\0'};

	cout << strlen(text) << endl;

	text[5] = '\0';

	cout << strlen(text) << endl;

	text[5] = 'i';

	cout << strlen(text) << endl;

	// Bad, but why?
	for (int i = 0; i < strlen(text); ++i)
	{
		cout << "text[" << i << "] = '" << text[i] << "'" << endl;
	}

	unsigned int len = strlen(text);
	for (int i = 0; i < len; ++i)
	{
		cout << "text[" << i << "] = '" << text[i] << "'" << endl;
	}

	return 0;
}
