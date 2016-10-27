#include<iostream>
using namespace std;
int main(){
	int card_number;
	cout << "Enter card number: ";
	cin >> card_number;
	int card_value = card_number % 13;
	char symbol;
	if (card_number >= 1 && card_number <= 13)
	{
		symbol = 'C';
	}
	else if (card_number >= 14 && card_number <= 26)
	{
		symbol = 'D';
	}
	else if (card_number >= 27 && card_number <= 39)
	{
		symbol = 'H';
	}
	else if (card_number >= 40 && card_number <= 52)
	{
		symbol = 'S';
	}
	else
	{
		cout << "Invalid card number..!" << endl;
		return 0; // stopping main() function
	}
	switch (card_value)
	{
		case 0: 
			cout << "A " << symbol << endl;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: 
			cout << card_value + 1 << " " << symbol << endl;
			break;
		case 10: 
			cout << "J " << symbol << endl;
			break;
		case 11:
			cout << "Q " << symbol << endl;
			break;
		case 12:
			cout << "K " << symbol << endl;
			break;
		default:
			cout << "Invalid data..!" << endl;
	}
	return 0;
}