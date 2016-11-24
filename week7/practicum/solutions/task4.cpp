#include <iostream>
using namespace std;

void printTriangleLetters(char upperLimit){
	if (upperLimit >= 'A'){
		for (char i = 'A'; i <= upperLimit; i++){
			cout << i << " ";
		}
		cout << endl;
		printTriangleLetters(upperLimit - 1);
	}
}
int main(){

	system("pause");
	return 0;
}