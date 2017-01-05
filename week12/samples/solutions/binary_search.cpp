#include <iostream>
using namespace std;
int binarySearch(int *arr, int x, int left, int right){
	int middle = (left + right)/2;
	if(arr[middle] > x){
		return binarySearch(arr,x,left,middle - 1);
	}
	if(arr[middle] < x){
		return binarySearch(arr,x,middle + 1,right);
	}
	return middle;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	cout<<binarySearch(arr,7,0,7);
	return 0;
}
