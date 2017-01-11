#include<iostream>
int main(){
	int num1, num2, num3;
	std::cout << "Please, enter 3 numbers: ";
	std::cin >> num1 >> num2 >> num3;
	double sum = 0,
		numbersAdded = 0;

	if (num1 % 6 == 0){
		sum += num1; // equivalent to sum = sum + num1
		numbersAdded++;
	}
	if (num2 % 6 == 0){
		sum += num2;
		numbersAdded++;
	}
	if (num3 % 6 == 0){
		sum += num3;
		numbersAdded++;
	}
	if (numbersAdded != 0){
		std::cout << sum / numbersAdded << std::endl;
	}
	else{
		std::cout << 0 << std::endl;
	}
	system("pause");
	return 0;
}