#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int nMinusOneFibonacci = 0, nFibonacci = 1;
	int nextFibonacci = 0;

	for (int i = 1; i < n; i++)
	{
		nextFibonacci = nMinusOneFibonacci + nFibonacci;
		nMinusOneFibonacci = nFibonacci;
		nFibonacci = nextFibonacci;
		/* Challange - да се рефакторира тялото на цикъла така, че да не се използва
		   применливата nextFibonacci
		*/
	}
	cout << nFibonacci << endl;

	return 0;
}
