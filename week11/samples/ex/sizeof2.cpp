#include <iostream>
using namespace std;

void sizeofTest(int matrix[][2], int n)
{

}

int main()
{
	int a[4][2];

	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;
	cout << sizeof(a[0][0]) << endl;

	sizeofTest(a);


	return 0;
}
