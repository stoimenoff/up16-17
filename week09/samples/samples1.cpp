#include <iostream>
using namespace std;

void print(int* pointer)
{
	cout << pointer << endl;
	cout << *pointer << endl;
	*pointer = 120; // ще мутира променливата, която е сочена от указателя
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int ge6o = 20;
	cout << (long long)&ge6o << endl;

	int* addressOfGe6o = &ge6o;
	cout << (long long)addressOfGe6o << endl;

	addressOfGe6o += 1;
	cout << (long long)addressOfGe6o << endl;

	char letter = 'k';
	char* address = &letter;

	cout << (long long)address << endl;

	*address = 'a'; // ще мутира стойността на letter
	cout << letter << endl;

	print(&ge6o);
	cout << ge6o << endl; // ge6o ще бъде променен от print

	int pesho[3] = {1, 2, 3};

	cout << pesho[0] << endl;
	cout << *pesho << endl; // същото като горното
	cout << *(pesho + 0) << endl; // същото като горното
	cout << pesho[1] << endl;
	cout << *(pesho + 1) << endl; // същото като горното


	printArray(pesho, 3);
	printArray(pesho + 1, 2);
	printArray(pesho + 1, 1);


	return 0;
}
