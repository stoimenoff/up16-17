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

int compareLesserRec(char first[], char second[])
{
	int lengthFirst = strlen(first);
	int lengthSecond = strlen(second);
	if(lengthFirst == 0 && lengthSecond == 0)
		return 0;
	else if(lengthFirst == 0 || lengthSecond == 0)
		return (lengthFirst == 0)? -1 : 1;
	else if(first[0] < second[0])
		return -1;
	else if(first[0] > second[0])
		return 1;
	else
		return compareLesserRec(first + 1, second + 1);
}

int main()
{
	char pesho[100];
	char gosho[100];
	cin >> pesho;
	cin >> gosho;
	cout << compareLesser(pesho, gosho) << endl;
	cout << compareLesserRec(pesho, gosho) << endl;

	return 0;
}
