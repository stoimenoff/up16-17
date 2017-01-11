#include <iostream>
using namespace std;
bool powerOfTwo(int a){
	for (int i = 1; i <= a; i *= 2){
		if (a%i != 0){
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	cin >> a;
	cout << boolalpha << powerOfTwo(a) << endl;
	return 0;
}