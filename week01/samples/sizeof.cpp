#include<iostream>

int main()
{
	short int shortNumber = 2;
	int number = 2;
	long int longNumber = 2;
	long long int longlongNumber = 2;

	std::cout << "short int: " << sizeof(shortNumber) << " bytes\n";
	std::cout << "int: " << sizeof(number) << " bytes\n";
	std::cout << "long int: " << sizeof(longNumber) << " bytes\n";
	std::cout << "long long int: " << sizeof(longlongNumber) << " bytes\n";

	return 0;
}