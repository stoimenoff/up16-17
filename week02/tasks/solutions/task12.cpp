#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	bool isDivisibleBy3 = (number % 3 == 0);

	cout << isDivisibleBy3 << endl;

	return 0;
}
