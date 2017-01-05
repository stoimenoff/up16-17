#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
	int count = 0;
	bool flag = false;
	for(int i = 0; i < n; ++i){
		flag = false;
		for(int j = 0; j < n - i - 1; ++j){
			count++;
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = true;
			}
		}
		if(!flag){
			break;
		}
	}
	cout<<"Number of iterations: "<<count<<endl;
}

void printArr(int* arr, int n){
	for(int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {5,8,1,-4,6,10,88,-20,10,-500,101,0,1,1000};
	printArr(arr,14);
	bubbleSort(arr, 14);
	printArr(arr,14);
	return 0;
}