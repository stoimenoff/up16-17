#include <iostream>
using namespace std;

void printInputBackwards(){
	char symbol = ' ';
	cin >> symbol;
	if (symbol != 'Z'){
		printInputBackwards();
		cout << symbol;
	}
	else{
		cout << 'Z';
	}
}
int main(){

	return 0;
}