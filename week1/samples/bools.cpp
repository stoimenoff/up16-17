#include<iostream>

int main()
{
	//примери на основните булеви оператори

	std::cout << "(5 > 7) " << (5 > 7) << "\n";
	std::cout << "(5 < 7) " << (5 < 7) << "\n";

	//флаг за cout, за да показва променливите от тип bool като true/false, а не 1/0
	std::cout << std::boolalpha;

	std::cout << "(5 > 7) " << (5 > 7) << "\n";
	std::cout << "(5 < 7) " << (5 < 7) << "\n";

	std::cout << "(5 == 7) " << (5 == 7) << "\n";
	std::cout << "(5 != 7) " << (5 != 7) << "\n";

	std::cout << "(5 == 5) " << (5 == 5) << "\n";

	return 0;
}