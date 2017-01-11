#include <iostream>
using namespace std;
int fact(int a){
	int result = 1;
	for (int i = 1; i <= a; i++){
		result *= i;
	}
	return result;
}
int main()
{
	int a;
	cin >> a;
	cout << fact(a) << endl;
	return 0;
}