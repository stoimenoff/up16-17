#include <iostream>
using namespace std;

int main()
{
	int card_number;
	cout << "Enter card number: ";
	cin >> card_number;
	
	if(card_number < 1 || card_number > 52)
	{
		cout << "Ivalid card number!" << endl;
		return 0; //stop main() function
	}

	int card_value = ((card_number - 1) % 13) + 2;
	if(card_value >= 2 && card_value <= 10) //is a number card
	{
		cout << card_value << " ";
	}
	else //not a number card
	{
		switch (card_value)
		{
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			case 13:
				cout << "K ";
				break;
			case 14: 
				cout << "A ";
				break;
		}
	}

	int card_color = ((card_number - 1) / 13) + 1;
	switch(card_color)
	{
		case 1: 
			cout << "Clubs" << endl;
			break;
		case 2:
			cout << "Diamonds" << endl;
			break;
		case 3:
			cout << "Hearts" << endl;
			break;
		case 4:
			cout << "Spades" << endl;
			break;
	}
	return 0;
}