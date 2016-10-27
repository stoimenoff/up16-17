#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number >= 2){
		for (int i = 2; i <= sqrt(number); i++){
			if (number%i == 0){
				cout << "The number " << number << " is not prime..!" << endl;
				return 0;
			}
		}
		cout << "The number " << number << " is prime..!" << endl;
	}
	else{
		cout << "The number " << number << " is not prime..!" << endl;
	}
	system("pause");
	return 0;
}