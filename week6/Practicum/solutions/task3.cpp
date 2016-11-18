#include <iostream>
using namespace std;
int fibonacci(int a){
	int first = 0, second = 1, next;
	for (int i = 0; i < a; i++){
		next = first + second;
		first = second;
		second = next;
	}
	return first;
}
int main()
{
	int a;
	cin >> a;
	cout << fibonacci(a) << endl;
	return 0;
}