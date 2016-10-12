#include<iostream>

int main()
{

	int number;
	int anotherNumber;

	anotherNumber = number = 5;

	std::cout << number << "\n";
	std::cout << anotherNumber << "\n";

	std::cout << "-----------\n";

	std::cout << ++number << "\n";
	std::cout << number << "\n";

	std::cout << "-----------\n";

	std::cout << number++ << "\n";
	std::cout << number << "\n";
	std::cout << (number = 10) << "\n";

	return 0;
}
