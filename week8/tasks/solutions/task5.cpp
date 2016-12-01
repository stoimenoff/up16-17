#include <iostream>
using namespace std;

int main(){
	int sequence[1000];
	int n, min, max;
	do{
		cout << "Enter non negative number less than 1000: ";
		cin >> n;
	} while (n < 0 || n >= 1000); //Проверяваме дали числото е не отрицателно или е по- малко от 1000

	for (int i = 0; i < n; i++){
		cout << "Please, enter a value for sequence[" << i << "]: ";
		cin >> sequence[i]; //Въвеждаме числата в масива
	}
	min = max = sequence[0]; // Задаваме началната стойноста на min и max да бъде първият елемент на масива
	for (int i = 1; i < n; i++){
		if (sequence[i] < min){ //Проверяваме дали елементът на масива на позиция i е по- малък от min
			min = sequence[i]; //Ако е по- малък присвояваме на min стойността на този елемент
		}
		if (sequence[i] > max){ //Проверяваме дали елементът на масива на позиция i е по- голям от max
			max = sequence[i]; //Ако е по- голям присвояваме на max стойността на този елемент
		}
	}

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}