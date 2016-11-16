1#include <iostream>
#include <cmath>
using namespace std;

// <return type> <name> (<parameters>) <body>

int pesho()
{
	return 5;
}

int successor(int n)
{
	return n + 1;
}

int minimumOf(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	return b;
	// return (a < b) ? a : b;
}

int maximumOf(int a, int b)
{
	if(b > a)
	{
		return b;
	}
	return a;
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double triangleArea(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double pointsTriangleArea(double x1, double y1, double x2,
							double y2, double x3, double y3)
{
	double a = distance(x2, y2, x3, y3);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x1, y1, x2, y2);
	return triangleArea(a, b, c);
}

int numberOfDigits(int n)
{
	int digits = 0;
	do
	{
		n /= 10;
		digits += 1;
	}
	while (n != 0);
	return digits;
}

int old_numberOfDigits_patched(int n)
{
	if(n == 0)
	{
		return 1;
	}
	int digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return digits;
}

void gosho(int n = 2)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Az sam Gosho" << endl;
	}
}

int main()
{
	// int number = pesho();
	// int s = successor(10);


	// int a = 10, b = 20;
	// int min = minimumOf(a, b);
	// int max = maximumOf(a, b);

	// int area = triangleArea(5, 12, 13);
	// cout << triangleArea(5, 12, 13) << endl;
	// cout << triangleArea(1, 1, 1) << endl;
	//
	// cout << pointsTriangleArea(0, 0, 1, 1, 0, 1) << endl;

	cout << numberOfDigits(1) << endl;
	cout << numberOfDigits(12) << endl;
	cout << numberOfDigits(123) << endl;
	cout << numberOfDigits(1234) << endl;
	cout << numberOfDigits(12345) << endl;
	cout << numberOfDigits(123456) << endl;
	cout << numberOfDigits(1234567) << endl;

	cout << numberOfDigits(-10) << endl;
	cout << numberOfDigits(-1234567) << endl;

	cout << numberOfDigits(0) << endl;

	gosho(10);

	int a = 20;
	int b = successor(a);

	cout << a << " " << b << endl;

	gosho();

	return 0;
}
