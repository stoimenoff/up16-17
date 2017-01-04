#include <iostream>
using namespace std;

int* leakLeak()
{
	int* array = new int[20];
	//TODO
	return array;
}

int main()
{
	int* array = leakLeak();
	//TODO
	delete[] array;

	return 0;
}
