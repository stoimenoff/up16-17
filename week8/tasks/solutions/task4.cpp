#include <iostream>
using namespace std;

int main(){
	int sequence[1000];
	int n, sumEven = 0, sumOdd = 0;
	do{
		cout << "Enter non negative number less than 1000: ";
		cin >> n;
	} while (n < 0 || n >= 1000); //Проверяваме дали числото е не отрицателно или е по- голямо от 1000

	for (int i = 0; i < n; i++){
		cout << "Please, enter a value for sequence[" << i << "]: ";
		cin >> sequence[i]; //Въвеждаме числата в масива
	}

	for (int i = 0; i < n; i++){
		if (sequence[i] % 2 == 0){ //проверяваме дали елементът на позиция i се дели на 2
			sumEven += sequence[i];
			continue; //continue прекъсва текущата итерация на цикъла
			//Тоест, ако условието на този If e изпълнено, всичко което е след този ред няма да се изпълни
		}
		sumOdd += sequence[i]; //Ако условието на горният If не е изпълнено, то този код ще се изпълни
	}

	cout << "The sum of the even elements is: " << sumEven << endl;
	cout << "The sum of the odd elements is: " << sumOdd << endl;

	return 0;
}
