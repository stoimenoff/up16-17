#include <iostream>
#include <cstring>
using namespace std;

int findNumberOfBits(int number){
	int result = 0;
	int bit = 1;
	while(number > bit && number >= bit*2){
		bit*=2;
		result++;
	}
	return result + 1;
}

char* decToBin(int number, int length){
	char *result = new char[length + 1];
	int index = 0;
	//Calculating the number in binary
	while(number != 0){
		result[index] = number % 2 + '0';
		index++;
		number/=2;
	}
	result[index] = '\0';
	return result;
}

bool isBinaryPalindrome(int number){
	int length = findNumberOfBits(number); //find the number of bits in the binary representation
	char* binaryRepresentation = decToBin(number, length);
	for(int i = 0;i < length/2; i++){
		if(binaryRepresentation[i] != binaryRepresentation[length - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	unsigned int number;
	cout<<"Enter a positive number: ";
	cin>>number;
	cout<<std::boolalpha<<isBinaryPalindrome(number)<<endl;
	return 0;
}
