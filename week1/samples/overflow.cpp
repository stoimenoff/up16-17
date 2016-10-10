#include<iostream>

int main()
{
	int number = 2147483647;
	std::cout << number  + 1 << "\n";
	std::cout << number  + 2 << "\n";

	unsigned int unumber = 4294967295;
	std::cout << unumber  + 1 << "\n";
	std::cout << unumber  + 2 << "\n";

	unumber = -1;
	std::cout << unumber << "\n";

	return 0;
}