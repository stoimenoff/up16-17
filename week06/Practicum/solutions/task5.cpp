#include <iostream>
#include <cmath>

using namespace std;
int removeK(int n, int k){
	if (k <= 0){
		return n;
	}
	int power = pow(10, k);
	return (n / power)*(power / 10) + n % (power / 10);
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << removeK(n, k);
	system("pause");
	return 0;
}