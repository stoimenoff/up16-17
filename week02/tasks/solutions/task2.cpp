#include <iostream>
using namespace std;

int main()
{
	double edge, height;

	//Въвеждаме страната и височината
	cin >> edge >> height;

	//Пресмятаме лицето...
	double area = (edge * height / 2);

	//...и го извеждаме на екрана
	cout << area << endl;

	return 0;
}
