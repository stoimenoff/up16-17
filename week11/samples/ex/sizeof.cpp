#include <iostream>
using namespace std;

void sizeofTest(int a[])
// void sizeofTest(int* a)
{
	cout << sizeof(a) << endl;
}

int main()
{
	char c, d, e;

	int a[5];
	// int a[4];

	int* b;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;

	sizeofTest(a);

	cout << sizeof(char*) << endl;
	cout << sizeof(long long[3]) << endl;
	cout << sizeof(bool*) << endl;
	cout << sizeof(bool[20]) << endl;
	cout << sizeof(void*) << endl;

	return 0;
}
