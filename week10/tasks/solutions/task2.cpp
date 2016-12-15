#include <iostream>
#include <cstring>
using namespace std;

void speakTheDigits(char word[])
{
	for (int i = 0; i < strlen(word); ++i)
	{
		switch(word[i])
		{
			case '0': cout << "zero"; break;
			case '1': cout << "one"; break;
			case '2': cout << "two"; break;
			case '3': cout << "three"; break;
			case '4': cout << "four"; break;
			case '5': cout << "five"; break;
			case '6': cout << "six"; break;
			case '7': cout << "seven"; break;
			case '8': cout << "eight"; break;
			case '9': cout << "nine"; break;
			default: cout << word[i]; break;
		}
	}
	cout << endl;
}

int main()
{
	char pesho[] = "I have 0 friends :(";
	speakTheDigits(pesho);

	return 0;
}
