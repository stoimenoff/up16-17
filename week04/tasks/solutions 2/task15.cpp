#include <iostream>
using namespace std;

int main()
{
	int search = 0;
	int digit = 0;
	bool found = false;
	cin >> search;
	cin >> digit;
	while(search > 0)
	{
		if(search % 10 == digit)
		{
			found = true;
			break;
		}
		search /= 10;
	}

	if(found)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}
