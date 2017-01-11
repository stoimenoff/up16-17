#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x  >> y;

	if(x == 0 && y == 0)
	{
		cout << "Center" << endl;
	}
	else if(x == 0) //лежи на ординатата
	{
		if (y > 0)
		{
			cout << "Between I and II" << endl;
		}
		else if (y < 0)
		{
			cout << "Between III and IV" << endl;
		}
	}
	else if(y == 0) //лежи на абсцисата
	{
		if (x > 0)
		{
			cout << "Between I and IV" << endl;
		}
		else if (x < 0)
		{
			cout << "Between II and III" << endl;
		}
	}
	else // не лежи върху нито една от осите
	{
		if(x > 0 && y > 0)
		{
			cout << "I" << endl;
		}
		else if(x < 0 && y > 0)
		{
			cout << "II" << endl;
		}
		else if(x < 0 && y < 0)
		{
			cout << "III" << endl;
		}
		else if(x > 0 && y < 0)
		{
			cout << "IV" << endl;
		}
	}
	return 0;
}