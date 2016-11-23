/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Svetomir Stoimenov
 * @task 9
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;

int main()
{
	const unsigned int BITS = 4;
	unsigned int firstOperand = 0, secondOperand = 0, result = 0;
	char operation;
	cin >> firstOperand >> operation >> secondOperand;
	firstOperand %= (1 << BITS); // Simulate the overflow.
	secondOperand %= (1 << BITS);
	if(secondOperand == 0 && (operation == '/' || operation == '%'))
		result = -1;
	else if (operation == '+')
		result = firstOperand + secondOperand;
	else if (operation == '-')
		result = firstOperand - secondOperand;
	else if (operation == '*')
		result = firstOperand * secondOperand;
	else if (operation == '/')
		result = firstOperand / secondOperand;
	else if (operation == '%')
		result = firstOperand % secondOperand;

	if(result == -1)
		cout << "Division by zero!" << endl;
	else
		cout << (result % (1 << BITS)) << endl;
	return 0;
}
