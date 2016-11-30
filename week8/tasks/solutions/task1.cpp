#include <iostream>
using namespace std;

int main()
{
	//Сумиране на елементите
	double numbers[1000];
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
	}

	double sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += numbers[i];
	}

	cout << "Sum = " << sum << endl;
	cout << "Average = " << sum / n << endl;


	return 0;
}
