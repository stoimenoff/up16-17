#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;

	cin >> a >> b >> c;

	if(a == 0) //линейно уравнение - bx + c = 0
	{
		if(b == 0)
		{
			if(c == 0)
			{
				cout << "Every x is a solution" << endl;
			}
			else
			{
				cout << "There is no real solution" << endl;	
			}
		}
		else
		{
			cout << "The only solution is" << -c/b << endl;
		}
	}
	else //квадратно
	{
		double discriminant = b*b - 4*a*c;
		if(discriminant < 0)
		{
			cout << "There is no real solution" << endl;
		}
		else
		{
			double x1 = (-b + sqrt(discriminant)) / (2*a);
			double x2 = (-b - sqrt(discriminant)) / (2*a);

			cout << "x1=" << x1 << endl;
			cout << "x2=" << x2 << endl;
		}

	}

	return 0;
}