#include <iostream>
#include <cstring>
using namespace std;

void trimNumbers(char* text){
	int numbers = 1;
	int length = strlen(text);
	for (int i = 0; i < length; ++i)
	{
		if(text[i] != text[i + 1])
		{
			numbers++;
		}
	}

	char* result = new char[numbers + 1];
	int index = 0;

	for (int i = 0; i < length; ++i)
	{
		if(text[i] != text[i + 1]){
			result[index] = text[i];
			index++;
		}
	}
	result[numbers] = '\0';
	cout<<result<<endl;
}

int main(){
	const int MAX_SIZE = 30;
	char str[MAX_SIZE];
	cin.getline(str, MAX_SIZE);
	trimNumbers(str);
	return 0;
}
