#include <iostream>
using namespace std;
int sum(int a){
	int result = 0;
	for (int i = 0; i <= a; i++){
		result += i;
	}
	return result;
}
int main()
{
	int a;
	cin >> a;
	cout << sum(a) << endl;
	return 0;
}