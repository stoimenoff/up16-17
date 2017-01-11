#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(double number, double eps = 1e-3)
{
	double root = 1;
	while(abs(number - (root * root)) >= eps)
	{
		root += (number / root);
		root /= 2;
	}
	return root;
}

int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int sumInterval(int a, int b)
{
	if(a == b)
	{
		return a;
	}
	return sumInterval(a, b - 1) + b;
}

int fibonacci(int n)
{
	if(n <= 2)
	{
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}



int main()
{

	return 0;
}
