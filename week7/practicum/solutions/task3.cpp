#include <iostream>
using namespace std;

void printTriangleNumbers(int a, int b){
	if (b != (a - 1)){
		printTriangleNumbers(a, b - 1);
		for (int i = a; i <= b; i++){
			cout << i << " ";
		}
		cout << endl;
	}
}
int main(){

	system("pause");
	return 0;
}