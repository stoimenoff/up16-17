#include <iostream>
using namespace std;

int main(){
	int sequence[1000];
	int n, counter = 0;
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
			counter++; //Увеличаваме броя на четните числа с 1
		}
	}

	cout << "The count of the even numbers in the sequence is: " << counter << endl;

	return 0;
}