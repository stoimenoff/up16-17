#include <iostream>
#include <cstring>
using namespace std;

// Напишете функция, която приема два символни низа и проверява дали първия е подниз на втория.

// Помощна функция, която проверява дали низа word започва с низа start
bool startsWith(char* start, char* word)
{
	int startLength = strlen(start);
	int wordLength = strlen(word);
	if (wordLength < startLength)
		return false;
	for (int i = 0; i < startLength; ++i)
		if (word[i] != start[i])
			return false;
	return true;
}

// Проверява дали низа needle се съдържа в низа haystack
bool isSubString(char* needle, char* haystack)
{
	for (int i = 0; i < strlen(haystack); ++i)
		if (startsWith(needle, haystack + i))
			return true;
	return false;
}

int main()
{
	char needle[100];
	char haystack[100];
	cin >> needle;
	cin >> haystack;
	cout << isSubString(needle, haystack) << endl;

	return 0;
}
