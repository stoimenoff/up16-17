#include <iostream>
#include <cstring>

using namespace std;

int findFirstOccurrence(char * str, char symbol)
{
	for (int i = 0; str[i] != '\0'; ++i)
		if (str[i] == symbol)
			return i;
	return -1;
}

int findFirstOccurrenceAfter(char * str, char symbol,
									unsigned int position)
{
	int indexInSubstring = findFirstOccurrence(str + position, symbol);
	if (indexInSubstring == -1)
		return -1;
	else
		return indexInSubstring + position;
}

void reverse(char* str)
{
	unsigned int length = strlen(str);
	char cache;
	for (int i = 0; i < length / 2; ++i)
	{
		cache = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = cache;
	}
}

/* !!! */
void copy(char* source, char* destination)
{
	unsigned int length = strlen(source);
	for (int i = 0; i < length; ++i)
	{
		destination[i] = source[i];
	}
	destination[length] = '\0';
}

/* !!! */
void append(char* str, char symbol)
{
	unsigned int length = strlen(str);
	str[length] = symbol;
	str[length + 1] = '\0';
}

/* !!! */
void append(char* str, const char* ending)
{
	unsigned int lengthStr = strlen(str);
	unsigned int lengthEnd = strlen(ending);
	for (int i = 0; i <= lengthEnd; ++i)
	{
		str[lengthStr + 1 + i] = ending[i];
	}
}

void trimLeft(char* str)
{
	unsigned int leadingSpaces = 0;
	while (str[leadingSpaces] == ' ')
	{
		++leadingSpaces;
	}
	unsigned int length = strlen(str);
	for (int i = 0; i <= length - leadingSpaces; ++i)
	{
		str[i] = str[i + leadingSpaces];
	}
}

void trimRight(char* str)
{
	// reverse(trimLeft(reverse(str))); - Прекалено бавно!
	unsigned int lastNonSpaceIndex = strlen(str) - 1;
	while (str[lastNonSpaceIndex] == ' ')
	{
		--lastNonSpaceIndex;
	}
	str[lastNonSpaceIndex] = '\0';
}

void reduceMultipleSpacesToOne(char* str)
{
	unsigned int length = strlen(str);
	// helper buffer to store result
	char result[length + 1]; // + 1 for the NULL terminator
	result[0] = str[0]; //copy the first element
	unsigned int resultWritePosition = 1;
	//copy str to result, but skip multiple spaces
	for (int i = 1; i < length; ++i)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			continue;
		}
		result[resultWritePosition] = str[i];
		resultWritePosition += 1;
	}
	result[resultWritePosition] = '\0';
	copy(result, str);
}

unsigned int countWords(char* str)
{
	unsigned int length = strlen(str);
	unsigned int wordsCount = 0;
	for (int i = 0; i < length; ++i)
	{
		if (str[i] != ' ') // word start
		{
			// go to end of the word
			i = findFirstOccurrenceAfter(str, ' ', i + 1);
			// if no space - go to the end
			if (i == -1)
				i = length;
			wordsCount += 1;
		}
	}
	return wordsCount;
}


int main()
{
	const int MAX_SIZE = 100;
	char text[MAX_SIZE];

	cin.getline(text, MAX_SIZE);

	// reverse(text);
	reduceMultipleSpacesToOne(text);

	cout << countWords(text) << endl;
	cout << text << endl;


	return 0;
}
