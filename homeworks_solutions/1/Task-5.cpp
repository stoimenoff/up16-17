/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 5
 * @compiler GCC
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double targetX, targetY, offsetX, offsetY;
	cin >> targetX >> targetY >> offsetX >> offsetY;
	targetX += offsetX;
	targetY += offsetY;
	const double eps = 1e-3;
	double r = sqrt(targetX * targetX + targetY * targetY);

	if(r <= 1 - eps)
		cout << 60 << endl;
	else if(r < 1 + eps)
		cout << 0 << endl;
	else if(r <= 3 - eps)
		cout << 20 << endl;
	else if(r < 3 + eps)
		cout << 0 << endl;
	else if(r < 8 + eps)
		cout << 10 << endl;
	else
		cout << 0 << endl;

	return 0;
}
