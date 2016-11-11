#include <iostream>
using namespace std;

int main()
{
	int start = 0;
	int end = 0;
	cin >> start;
	cin >> end;

	bool hasToBeGreater = true, isCrazy = true;
	int candidateCrazy = 0, lastDigit = 0, oneButLastDigit = 0;
	for(int i = start; i <= end; i++)
	{
		candidateCrazy = i;
		hasToBeGreater = true;
		isCrazy = true;
		while(candidateCrazy > 10)
		{
			lastDigit = candidateCrazy % 10;
			oneButLastDigit = (candidateCrazy / 10) % 10;
			if(hasToBeGreater && lastDigit <= oneButLastDigit)
			{
				isCrazy = false;
				break;
			}
			if(!hasToBeGreater && lastDigit >= oneButLastDigit)
			{
				isCrazy = false;
				break;
			}
			hasToBeGreater = !hasToBeGreater;
			candidateCrazy /= 10;
		}
		if(isCrazy)
		{
			cout << i << endl;
		}
	}

	return 0;
}
