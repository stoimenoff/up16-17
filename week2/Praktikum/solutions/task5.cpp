#include<iostream>
int main(){
	int year;
	std::cout << "Please, enter a year: " << std::endl;
	std::cin >> year;
	if (year % 4 != 0){
		std::cout << "It is a common year..!" << std::endl;
	}
	else if (year % 100 != 100){
		std::cout << "It is a leap year..!" << std::endl;
	}
	else if (year % 400 != 400){
		std::cout << "It is a common year..!" << std::endl;
	}
	else{
		std::cout << "It is a leap year..!" << std::endl;
	}
	system("pause");
	return 0;
}