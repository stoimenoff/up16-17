/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 10
 * @compiler GCC
 *
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double a1, b1, c1, a2, b2, c2, x, y, eps = 1e-5;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	double determinantAB = (a1*b2 - b1*a2), determinantBC = (c1*b2 - c2*b1);
	int rankAB = (abs(determinantAB) > eps) + 1, rankBC = (abs(determinantBC) > eps) + 1;
	// Check if the matrixes contain only zero vectors, because the rank is 0 then
	if(b1 == 0 && b2 == 0)
	{
		if(a1 == 0 && a2 == 0)
			rankAB = 0;
		if(c1 == 0 && c2 == 0)
			rankBC = 0;
	}
	int rankABC = (rankAB > rankBC) ? rankAB : rankBC;
	if(rankAB < rankABC)
		cout << "No solution" << endl;
	else if (rankABC <= 1)
		cout << "Many solutions" << endl;
	else
	{
		double x = determinantBC / determinantAB;
		double y = (c1 - a1*x) / b1;
		cout << setprecision(5) << x << " " << y << endl;
	}

	return 0;
}
