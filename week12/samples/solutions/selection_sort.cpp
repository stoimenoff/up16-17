#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
	int count = 0;
	int minIndex = 0;
	int maxIndex = 0;
	for(int i = 0; i < n/2; ++i){
		minIndex = i;
		maxIndex = i;
		for(int j = i; j < n - i; ++j){
			count++;
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}	
			if(arr[j] >= arr[maxIndex]){
				maxIndex = j;	
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;

		if(i == maxIndex){
			maxIndex = minIndex;
		}

		temp = arr[n - i - 1];
		arr[n - i - 1] = arr[maxIndex];
		arr[maxIndex] = temp;
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
	selectionSort(arr, 14);
	printArr(arr,14);
	return 0;
}