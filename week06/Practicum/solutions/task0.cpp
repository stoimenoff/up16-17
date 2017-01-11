#include <iostream>
using namespace std;
int increment(int x){
	return x + 1;
}
int main()
{
	int x;
	cin >> x;
	cout << increment(x) << endl;
	return 0;
}