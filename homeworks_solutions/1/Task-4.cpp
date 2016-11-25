/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 4
 * @compiler GCC
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char figure, attackingX, kingX;
	int attackingY, kingY, distanceX, distanceY;
	cin >> figure >> attackingX >> attackingY >> kingX >> kingY;
	distanceX = abs(attackingX - kingX);
	distanceY = abs(attackingY - kingY);

	if(figure == 'Q')
	{
		if(distanceX == distanceY || attackingX == kingX || attackingY == kingY)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else if(figure == 'B')
	{
		if(distanceX == distanceY)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else if(figure == 'N')
	{
		if((distanceX == 2 && distanceY == 1) || (distanceX == 1 && distanceY == 2))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else if(figure == 'R')
	{
		if(attackingX == kingX || attackingY == kingY)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
