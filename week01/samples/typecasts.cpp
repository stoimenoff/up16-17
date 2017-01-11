#include<iostream>

int main()
{
	long long int longlongNumber = 50000000000;

	//longlongNumber е прекалено голямо число, за да се събере в int
	//cast-ването ще направи overflow
	std::cout << (int) longlongNumber << "\n";

	return 0;
}