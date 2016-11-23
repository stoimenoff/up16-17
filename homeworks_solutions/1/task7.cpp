/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 7
 * @compiler GCC
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	double r = sqrt(x * x + y * y);
	double smallBlackCenterDistance = sqrt(x * x + (y - 3) * (y - 3));
	double smallWhiteCenterDistance = sqrt(x * x + (y + 3) * (y + 3));

	if(r > 6)
		cout << "Neutral" << endl;
	else if (r == 6)
		cout << "Neutral" << endl;
	else if (smallWhiteCenterDistance == 1)
		cout << "Neutral" << endl;
	else if (smallBlackCenterDistance == 1)
		cout << "Neutral" << endl;
	else if (smallWhiteCenterDistance == 3 && x <= 0)
		cout << "Neutral" << endl;
	else if (smallBlackCenterDistance == 3 && x >= 0)
		cout << "Neutral" << endl;
	else if (smallBlackCenterDistance < 1)
		cout << "Evil" << endl;
	else if (smallWhiteCenterDistance < 1)
		cout << "Good" << endl;
	else if (smallWhiteCenterDistance < 3)
		cout << "Evil" << endl;
	else if (smallBlackCenterDistance < 3)
		cout << "Good" << endl;
	else if (x < 0)
		cout << "Good" << endl;
	else
		cout << "Evil" << endl;

	return 0;
}
