/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 6
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;

int main()
{
	int x1, y1, h1, w1;
	int x2, y2, h2, w2;
	cin >> x1 >> y1 >> h1 >> w1;
	cin >> x2 >> y2 >> h2 >> w2;

	int width, height, maxLeft, minRight, maxBottom, minTop;
	if(x1 < x2)
		maxLeft = x2;
	else
		maxLeft = x1;
	if(x1 + w1 < x2 + w2)
		minRight = x1 + w1;
	else
		minRight = x2 + w2;

	if(y1 < y2)
		maxBottom = y2;
	else
		maxBottom = y1;
	if(y1 + h1 < y2 + h2)
		minTop = y1 + h1;
	else
		minTop = y2 + h2;

	width = minRight - maxLeft;
	height = minTop - maxBottom;

	if(width <= 0 || height <= 0)
		cout << 0 << endl;
	else
		cout << width * height << endl;

	/* Same as
		maxLeft = (x1 < x2) ? x2 : x1;
		minRight = (x1 + w1 < x2 + w2) ? x1 + w1 : x2 + w2;
		maxBottom = (y1 < y2) ? y2 : y1;
		minTop = (y1 + h1 < y2 + h2) ? y1 + h1 : y2 + h2;
		width = minRight - maxLeft;
		height = minTop - maxBottom;
		cout << ((width <= 0 || height <= 0) ? 0 : width * height) << endl;
	*/

	return 0;
}
