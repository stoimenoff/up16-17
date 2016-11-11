#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	for(int i = 1; (1 << i) - 1 <= n; i += 1)
	{
		cout << (1 << i) - 1 << endl;
	}

	return 0;
}
