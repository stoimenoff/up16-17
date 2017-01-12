#include <iostream>
#include <cstring>
using namespace std;

int calculateSum(char* text){
	int result = 0;
	int currentValue = 0;
	bool minus = false;
	int minusIndex = 0;
	for(int i = 0; i<strlen(text);i++){
		if(text[i] == '-'){
			minus = true;
			minusIndex = i;
			continue;
		}
		if(text[i]>='0' && text[i]<='9'){
			currentValue *= 10;
			currentValue += text[i] - 48;
			minusIndex++;
		}
		if(i == strlen(text) - 1 || !(text[i]>= '0' && text[i]<='9') || text[i + 1] == '-'){ 
			if(minus){
				currentValue*=-1;
			}
			result+=currentValue;
			currentValue = 0;
			minus = false;
			minusIndex = 0;
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
