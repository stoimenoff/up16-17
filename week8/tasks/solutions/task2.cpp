#include <iostream>
using namespace std;

int main()
{
	int sequence[1000];
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> sequence[i];
	}

	bool sorted = true;
	for (int i = 0; i < n - 1; ++i)
	{
		if(sequence[i] >= sequence[i + 1])
		{
			sorted = false;
			break;
		}
	}

	cout << (sorted ? "Yes" : "No") << endl;

	return 0;
}
