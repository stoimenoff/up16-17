#include <iostream>

int main()
{

	char letter = 'a'; // 97
	char anotherLetter = 'f'; // 102

	std::cout << letter << "\n";
	std::cout << anotherLetter << "\n";

	std::cout << letter + anotherLetter << "\n";
	std::cout << letter - anotherLetter << "\n";

	char thirdLetter = letter + 2;

	std::cout << thirdLetter << "\n";

	char limit = 127;
	std::cout << (int) limit << "\n";

	return 0;
}
