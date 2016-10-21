#include<iostream>
int main(){
	int number;
	std::cout << "Please, enter a three digit number: ";
	std::cin >> number;
	if (number > 99 && number < 1000){
		std::cout << std::boolalpha << (((number % 10) + ((number / 10) % 10) + ((number / 100) % 10) + (number / 1000)) % 3 == 0) << std::endl;
	}
	else{
		std::cout << "Enter a valid three digit number..!" << std::endl;
	}
	system("pause");
	return 0;
}