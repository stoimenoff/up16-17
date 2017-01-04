#include <iostream>

void print(int* array, unsigned int size)
{
	// Задача 0: Функцията трябва да извежда елементите на array на
	// стандартния изход.
	//TODO
}

void fill(int* array, unsigned int size, int fillValue)
{
	// Задача 1: Функцията трябва да запълни масива array
	// със стойности fillValue
	//TODO
}

void sort(int* array, unsigned int size)
{
	// Задача 2: Функцията трябва да сортира масива.
	//TODO
}

int find(int* array, unsigned int size, int element)
{
	// Задача 3: Да се потърси дадения елемент в масива.
	// Ако го има - да се върне съответния му индекс,
	// в противен случай - да се върне числото -1
	//TODO
}

void copy(int* arrayFrom, int* arrayTo, unsigned int size)
{
	// Задача 4: Функията трябва да копира елементите от arrayFrom
	// в arrayTo. Приемете, че arrayTo е достатъчно голям буфер.
	//TODO
}

int* resize(int* array, unsigned int size, unsigned int newSize)
{
	// Задача 5: Функцията трябва да създаде нов буфер
	// със съответния нов размер. Максимален брой елементи от стария буфер
	// трябва да бъдат копирани в новия. Ако новия размер е по-голям,
	// да се добавят "свободни" места - нули. Ако е по-малък - да липсват
	// елементите от края. Да се върне указател към новия буфер.
	//TODO
}

void insertElement(int* array, unsigned int size, unsigned int position, int newElement)
{
	// Задача 6: Функцията трябва да "вмъкне" нов елемент в масива на указаната
	// позиция. Последния елемент бива "загубен".
	//TODO
}

void deleteElement(int* array, unsigned int size, unsigned int position)
{
	// Задача 7: Функцията трябва да изтрие елемента в масива
	// на указаната позиция. Последния елемент да се занули.
	//TODO
}

int main()
{
	// Примери:
	int a[6];
	fill(a, 6, -9); // a = [-9, -9, -9, -9, -9, -9]

	int b[] = {7, 5, 4, 8, 1, 6, 9, 4, 3, 2};
	sort(b, 10); // b = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9]

	find(b, 10, 2); // 1
	find(b, 10, 9); // 9
	find(b, 10, 4); // 3
	find(b, 10, 42); // -1

	int c[10];
	copy(b, c, 10); // c = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9]
	copy(a, b, 6); // b = [-9, -9, -9, -9, -9, -9, 6, 7, 8, 9]
	copy(c, b, 6); // b = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9]

	int* extendedB = resize(b, 10, 15);
	// extendedB = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0]
	delete[] extendedB;

	int* shrinkedB = resize(b, 10, 5);
	// shrinkedB = [1, 2, 3, 4, 4]
	delete[] shrinkedB;

	insertElement(b, 10, 0, -3); // b = [-3, 1, 2, 3, 4, 4, 5, 6, 7, 8]
	insertElement(b, 10, 7, -13); // b = [-3, 1, 2, 3, 4, 4, 5, -13, 6, 7]

	deleteElement(b, 10, 0); // b = [1, 2, 3, 4, 4, 5, -13, 6, 7, 0]
	deleteElement(b, 10, 3); // b = [1, 2, 3, 4, 5, -13, 6, 7, 0, 0]

	return 0;
}
