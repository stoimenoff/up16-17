#include<iostream>

int main()
{

	std::cout << "(5 > 7) " << (5 > 7) << "\n";
	std::cout << "(5 < 7) " << (5 < 7) << "\n";

	std::cout << std::boolalpha;

	std::cout << "(5 > 7) " << (5 > 7) << "\n";
	std::cout << "(5 < 7) " << (5 < 7) << "\n";

	std::cout << "(5 == 7) " << (5 == 7) << "\n";
	std::cout << "(5 != 7) " << (5 != 7) << "\n";

	std::cout << "(5 == 5) " << (5 == 5) << "\n";

	return 0;
}