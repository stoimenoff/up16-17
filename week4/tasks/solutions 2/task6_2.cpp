#include <iostream>
using namespace std;

int main()
{
	//без използване на cmath (повдигане на 10 на степен)
	int x = 0;
	int p = 0;
	cin >> x;
	cin >> p;

	//копираме х и преброяваме цифрите му
	int numberOfDigits = 0;
	int copyOfX = x;
	while(copyOfX > 0)
	{
		numberOfDigits += 1;
		copyOfX /= 10;
	}
	//взимаме правилната цифра отзад-напред
	for (int i = 0; i < numberOfDigits - p; i++)
	{
		x /= 10;
	}
	cout << x % 10 << endl;

	return 0;
}
