#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a + *b;
	*a = c - *a;
	*b = c - *b;
}
