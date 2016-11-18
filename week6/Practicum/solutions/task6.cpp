#include <iostream>
using namespace std;

bool isPerfectNumber(int number){
	int sum = 0;
	for (int i = 1; i < number; i++){
		if (number%i == 0){
			sum += i;
		}
	}
	return (number == sum);
}

int main()
{
	cout << boolalpha << isPerfectNumber(6);
	system("pause");
	return 0;
}