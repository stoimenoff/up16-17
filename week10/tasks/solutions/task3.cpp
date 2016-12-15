#include <iostream>
#include <cstring>
using namespace std;

int compareLesser(char first[], char second[])
{
	int lengthFirst = strlen(first);
	int lengthSecond = strlen(second);
	int length = (lengthFirst < lengthSecond)? lengthFirst : lengthSecond;
	for (int i = 0; i < length; ++i)
	{
		if(first[i] < second[i])
			return -1;
		else if(first[i] > second[i])
			return 1;
	}
	if(lengthFirst < lengthSecond)
		return -1;
	else if(lengthFirst > lengthSecond)
		return 1;
	else
		return 0;
}

int main()
{
	char pesho[100];
	char gosho[100];
	cin >> pesho;
	cin >> gosho;
	cout << compareLesser(pesho, gosho) << endl;

	return 0;
}
