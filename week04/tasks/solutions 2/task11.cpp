#include <iostream>
using namespace std;

int main()
{
	int p = 0;
	int q = 0;
	cin >> p;
	cin >> q;
	int sumOfDivisors = 0;
	/* Наивно решение - обхождаме интервала [p, q] i и за всяко число
	   проверяваме дали е перфектно
	*/
	for(int candidatePerfect = p; candidatePerfect <= q; candidatePerfect++)
	{
		// Сумираме делителите на кандидат-перфектното число
		sumOfDivisors = 0;
		for (int divisor = 1; divisor < candidatePerfect; divisor++)
		{
			if(candidatePerfect % divisor == 0)
			{
				sumOfDivisors += divisor;
			}
		}
		// Проверяваме дали е перфектно
		if(sumOfDivisors == candidatePerfect)
		{
			cout << candidatePerfect << endl;
		}

	}

	return 0;
}
