#include<iostream>
using namespace std;
int main(){
	int evaluation;
	cout << "Enter evaluation: ";
	cin >> evaluation;
	switch (evaluation){
	case 2: cout << "F" << endl; break;
	case 3: cout << "D" << endl; break;
	case 4: cout << "C" << endl; break;
	case 5: cout << "B" << endl; break;
	case 6: cout << "A" << endl; break;
	default: cout << "Please, enter valid evaluation..!" << endl;
	}
	system("pause");
	return 0;
}