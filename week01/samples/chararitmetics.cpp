#include <iostream>

int main()
{

	char letter = 'a'; // ascii код: 97
	char anotherLetter = 'f'; // ascii код: 102

	std::cout << letter << "\n";
	std::cout << anotherLetter << "\n";

	//ще се отпечатат сборът и разликата на ascii кодовете
	std::cout << letter + anotherLetter << "\n";
	std::cout << letter - anotherLetter << "\n";

	//thirdLetter ще има ascii код 97 + 2 = 99, т.е. буквата 'c'
	char thirdLetter = letter + 2;

	std::cout << thirdLetter << "\n";

	return 0;
}
