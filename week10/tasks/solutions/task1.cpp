#include <iostream>
#include <cstring>
using namespace std;

void printSwapCase(char word[])
{
	for (int i = 0; i < strlen(word); ++i)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			cout << char(word[i] - 32);
		else if (word[i] >= 'A' && word[i] <= 'Z')
			cout << char(word[i] + 32);
		else
			cout << word[i];
	}
	cout << endl;
}

int main()
{
	char pesho[] = "peShO";
	printSwapCase(pesho);

	cout << pesho[0] << endl;

	return 0;
}
