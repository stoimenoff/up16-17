#include<iostream>

int main()
{
	int number = 2147483647; //max int
	std::cout << number  + 1 << "\n"; //ще "превърти" и ще отпечата -2147483648 (min int)
	std::cout << number  + 2 << "\n"; // -2147483647

	unsigned int unumber = 4294967295; //max unsigned int
	std::cout << unumber  + 1 << "\n"; //ще превърти и ще отпечата 0 (min unsigned long)
	std::cout << unumber  + 2 << "\n"; // 1

	unumber = -1; //ще "превърти" назад и ще отиде на max unsigned int
	std::cout << unumber << "\n"; //4294967295

	return 0;
}