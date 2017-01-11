#include <iostream>
using namespace std;

int compare(char s[], char p[]){
	int n1 = strlen(s);
	int n2 = strlen(p);
	if (n1 < n2){
		return -1;
	}
	if (n2 > n1){
		return 1;
	}
	for (int i = 0; i < n1; ++i){
		if (s[i] < p[i]){
			return -1;
		}
		if (s[i] > p[i]){
			return 1;
		}
	}
	return 0;
}

int comparePointer(char *s, char *p){
	if (*s == 0 && *p == 0){
		return 0;
	}
	if (*s > *p){
		return 1;
	}
	if (*s < *p){
		return -1;
	}
	return compare(s + 1, p + 1);
}

int main(){
	cout << compare("asd", "dsa");
	cout << comparePointer("asd", "dsa");
	char pesho[] = "pesho";
	char izdislav[] = "izdislav";
	cout << compare(pesho, izdislav);
	cout << compareRec(pesho, izdislav);

	return 0;
}