#include<iostream>
int main(){
	int num1, num2, num3;
	std::cout << "Please, enter 3 numbers: ";
	std::cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3){
		std::cout << num1 << std::endl;
	}
	else if (num2 >= num1 && num2 >= num3){
		std::cout << num2 << std::endl;
	}
	else{
		std::cout << num3 << std::endl;
	}
	system("pause");
	return 0;
}