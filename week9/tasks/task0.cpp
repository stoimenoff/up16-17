#include <iostream>
using namespace std;

void swap(int &a, int &b){
	a = a + b;
	b = a - b;
	a = a - b;
}

void swap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main(){
	int a = 5;
	int b = 3;
	swap(a, b);
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	//swap(2, 3); 
	//NOPE!
	return 0;
}