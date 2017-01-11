#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
}

void outputArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int evaluatePoly(int coefficitents[], int n, int x)
{
	int sum = 0;
	int pow = 1;
	for(int i = 0; i < n; ++i)
	{
		sum += coefficitents[i] * pow;
		pow *= x;
	}

	return sum;
}

int scalarProduct(int vector1[], int vector2[], int n)
{
	int scalarProduct = 0;
	for (int i = 0; i < n; ++i)
	{
		scalarProduct += (vector1[i] * vector2[i]);
	}
	return scalarProduct;
}

int main()
{
	int n;
	cin >> n;
	int firstVector[1000];
	int secondVector[1000];

	inputArray(firstVector, n);
	inputArray(secondVector, n);

	cout << scalarProduct(firstVector, secondVector, n) << endl;

	return 0;
}
