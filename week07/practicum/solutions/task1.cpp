#include <iostream>
using namespace std;

int product(int a, int b){
	if (a == 1){
		return b;
	}
	return b + product(a - 1, b);
}

int main(){

	return 0;
}