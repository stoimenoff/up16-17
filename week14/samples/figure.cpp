#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

void printSpaces(unsigned int spaces)
{
	for (int i = 0; i < spaces; ++i)
	{
		cout << ' ';
	}
	// cout << setw(spaces) << "";
}

int main()
{
	unsigned int n;
	cin >> n;

	unsigned row_start = 1, row_end = n, spaces = 0;

	for (int row = 1; row <= n/2; ++row)
	{
		printSpaces(spaces);

		for (int element = row_start; element < row_end; ++element)
		{
			cout << element << " ";
		}
		cout << row_end << endl;

		row_start += 1;
		row_end -= 1;
		spaces += 2;
	}

	if (n % 2 == 0)
	{
		printSpaces(spaces - 1);
		cout << '.' << endl;
	}
	else
	{
		printSpaces(spaces);
		cout << n/2 + 1 << endl;
	}

	for (int row = 1; row <= n/2; ++row)
	{
		row_start -= 1;
		row_end += 1;
		spaces -= 2;

		printSpaces(spaces);

		for (int element = row_start; element < row_end; ++element)
		{
			cout << element << " ";
		}
		cout << row_end << endl;
	}


	return 0;
}
