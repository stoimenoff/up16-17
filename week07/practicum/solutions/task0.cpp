#include <iostream>
using namespace std;

bool contains(int number, int k){
	if (number == 0 && !(k == 0)){
		return false;
	}
	if (number % 10 == k){
		return true;
	}
	return contains(number / 10, k);
}

int main(){

	return 0;	
}