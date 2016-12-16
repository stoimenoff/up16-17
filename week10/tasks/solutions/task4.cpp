#include <iostream>
#include <cstring>
using namespace std;


bool endsWithIzdislav1(char word[])
{
	char izdislav[] = "izdislav";
	int wordLength = strlen(word);
	int izdislavLength = strlen(izdislav);

	if (wordLength < izdislavLength)
		return false;
	for (int i = 0; i < izdislavLength; ++i)
		if (izdislav[i] != word[wordLength - izdislavLength + i])
			return false;
	return true;

}

bool endsWithIzdislav2(char word[])
{
	char izdislav[] = "izdislav";
	int wordLength = strlen(word);
	int izdislavLength = strlen(izdislav);

	return strcmp((word + wordLength - izdislavLength), izdislav) == 0;
	/*
		Документация за strcmp: http://en.cppreference.com/w/c/string/byte/strcmp
		 * Връща 0, ако двата низа са еднакви.
	*/
}

int main()
{
	char word[100];
	cin >> word;
	cout << endsWithIzdislav1(word) << endl;
	cout << endsWithIzdislav2(word) << endl;

	return 0;
}
