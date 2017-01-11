#include<iostream>

int main()
{

	std::cout << 2 / 0.0 << "\n"; //inf
	std::cout << -2 / 0.0 << "\n"; //-inf
	std::cout << 23.6 / 0.0 << "\n"; //inf
	std::cout << 0.0 / 0.0 << "\n"; //nan

	// std::cout << 2 / 0 << "\n"; - няма да се компилира или ще даде грешка при изпълнение

	return 0;
}