#include<iostream>

int main()
{

	int number;
	int anotherNumber;

	//операторът за присвояване, връща присвоената стойност
	anotherNumber = number = 5;

	std::cout << number << "\n"; // 5
	std::cout << anotherNumber << "\n"; //5

	std::cout << "-----------\n";

	std::cout << ++number << "\n"; //ще увеличи number и ще го отпечата, т.е. ще отпечата 6
	std::cout << number << "\n"; //6

	std::cout << "-----------\n";

	std::cout << number++ << "\n"; //ще отпечата number и тогава ще го увеличи, т.е. ще отпечата 6
	std::cout << number << "\n"; //7, защото number е увеличено от горния ред
	std::cout << (number = 10) << "\n"; //10, защото операторът за присвояване ще върне 10

	return 0;
}
