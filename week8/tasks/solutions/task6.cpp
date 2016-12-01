#include <iostream>
using namespace std;

int main(){
	int sequence[1000];
	int n, a, b;
	do{
		cout << "Enter non negative number less than 1000: ";
		cin >> n;
	} while (n < 0 || n >= 1000); //Проверяваме дали числото е не отрицателно или е по- голямо от 1000

	for (int i = 0; i < n; i++){
		cout << "Please, enter a value for sequence[" << i << "]: ";
		cin >> sequence[i]; //Въвеждаме числата в масива
	}

	do{
		cout << "Enter the infimum: ";
		cin >> a;
	} while (a < 0 || a > n); // Въвеждаме a докато не въведем валиден индекс.
	// Тоест проверяваме дали няма да достъпил елемент на масива, на който не сме му задали стойност
	
	do{
		cout << "Enter the supremum: ";
		cin >> b;
	} while (b < 0 || b > n); //Аналогично като за a
	
	for (int i = a; i < b; i++){
		cout << sequence[i] << " ";
	}

	system("pause");
	return 0;
}