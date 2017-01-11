#include <iostream>
using namespace std;

int main()
{

	//Добър момент да се използва const
	const double PI = 3.14159265;

	double radius;
	//Въвеждаме радиуса
	cin >> radius;

	//Пресмятаме лицето и дължината
	double area = PI * radius * radius;
	double circumference = 2 * PI * radius;

	cout << "Area: " << area << endl;
	cout << "Circumference: " << circumference << endl;

	return 0;
}
