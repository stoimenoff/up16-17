#include<iostream>
using namespace std;
int main(){
	int season;
	cout << "Enter number between 0 and 3 ";
	cin >> season;
	switch (season){
	case 0: cout << "Spring" << endl;
		break;
	case 1: cout << "Summer" << endl;
		break;
	case 2: cout << "Autumn" << endl;
		break;
	case 3: cout << "Winter" << endl;
		break;
	default:
		cout << "Enter a valind number between 0 and 3" << endl;
	}
	system("pause");
	return 0;
}