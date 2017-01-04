#include <iostream>
using namespace std;

void printXXX(int** matrix, int row, int columns)
{
	// TODO
}

int main()
{
	int rows = 3, columns = 4;

	// allocate
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[columns];
	}

	printXXX(matrix);

	// free/delete
	for (int i = 0; i < rows; ++i)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
