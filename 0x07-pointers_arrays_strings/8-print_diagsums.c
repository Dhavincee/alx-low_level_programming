#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: first matrix
 * @size: second matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int mat1 = 0;
	int mat2 = 0;

	for (i = 0; i < size; i++)
	{
		mat1 += a[i * size + i];
		mat2 = a[i * size + (size - 1 - i)];
	}
	printf("%d\n", mat1);
	printf("%d\n", mat2);
}
