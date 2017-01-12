#include <iostream>
#include <cstring>
using namespace std;

int calculateSum(char* text){
	int result = 0;
	int currentValue = 0;
	bool minus = false;
	int length = strlen(text);
	for(int i = 0; i < length; i++){
		if(text[i]>='0' && text[i]<='9'){
			currentValue *= 10;
			currentValue += text[i] - '0';
		}
		if(i == length - 1 || text[i]<'0' || text[i]>'9'){
			if(minus){
				currentValue*=-1;
			}
			result+=currentValue;
			currentValue = 0;
			minus = false;
		}
		if(text[i] == '-'){
			minus = true;
		}
	}
	return result;
}

int main(){
	const int MAX_SIZE = 50;
	char text[MAX_SIZE];
	cin.getline(text,MAX_SIZE);
	cout<<calculateSum(text)<<endl;

	return 0;
}
