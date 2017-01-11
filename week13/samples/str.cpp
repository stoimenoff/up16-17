#include <iostream>

using namespace std;

void testSizeOf(char* str)
{
	cout << sizeof(str) << endl;
}

int main()
{
	// char *str = "baba"; // Deprecated !!!
	const char *str = "baba";
	cout << str << endl;

	char word[] = "dyado";
	cout << sizeof(word) << endl;

	// Какъв е проблема на долния ред?
	// char anotherWord[3] = "asd";

	char thisIsAString[] = {'a', 'b', 'c', '\0'};
	char thisIsACharArray[3] = {'a', 'b', 'c'};

	cout << thisIsAString << endl;
	// cout << thisIsACharArray << endl; - WRONG!

	return 0;
}
