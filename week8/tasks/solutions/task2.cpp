#include <iostream>
using namespace std;

int main(){
	int sequence[1000];
	int n,x;
	bool contains = false;

	do{
		cout << "Enter non negative number less than 1000: ";
		cin >> n;
	} while (n < 0 || n >= 1000); //Проверяваме дали числото е не отрицателно и е по- малко от 1000

	for (int i = 0; i < n; i++){
		cout << "Please, enter a value for sequence[" << i << "]: ";
		cin >> sequence[i]; //Въвеждаме числата в масива
	}

	cout << "Please, enter a value for x: ";
	cin >> x;

	for (int i = 0; i < n; i++){
		if (sequence[i] == x){ //проверяваме дали някой елемент на масива е равен на x
			contains = true;
			break; // break прекъсва изпълнението на цикъла
		}
	}
		
	cout << (contains ? "Found" : "Not Found") << endl;

	return 0;
}