#include<iostream>

int main()
{

	double tpc = 12.0;
	double dpc = 25.0;
	double b = 124.5;

	double t = b * tpc / 100;
	double d = b * dpc / 100;

	double tb = b + t - d;

	std::cout << t << "\n";
	std::cout << d << "\n";
	std::cout << tb << "\n";

}