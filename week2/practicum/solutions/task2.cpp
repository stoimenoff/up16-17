#include<iostream>
int main(){
	int grade;
	std::cout << "Please, enter a grade [0 - 100]: ";
	std::cin >> grade;
	if (grade  <0 || grade > 100){
		std::cout << "Out of range..!" << std::endl;
	}
	else if (grade == 100){
		std::cout << "Your score is perfect..!" << std::endl;
	}
	else if (grade == 0){
		std::cout << "Your score is very bad..!" << std::endl;
	}
	else{
		std::cout << "Your score is good..!" << std::endl;
	}
	system("pause");
	return 0;
}