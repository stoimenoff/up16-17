#include<iostream>
using namespace std;
int main(){
	char latin_letter;
	cout << "Enter a latin letter: ";
	cin >> latin_letter;
	switch (latin_letter)
	{
		case 'I': cout << 1 << endl;
			break;
		case 'V': cout << 5 << endl;
			break;
		case 'X': cout << 10 << endl;
			break;
		case 'C': cout << 100 << endl;
			break;
		case 'D': cout << 500 << endl;
			break;
		case 'M': cout << 1000 << endl;
			break;
		default:
			cout << "Please enter a valid latin letter..!" << endl;
	}
	return 0;
}