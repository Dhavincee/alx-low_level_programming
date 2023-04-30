#include "main.h"
#include <math.h>

/**
 * _sqrt - function that finds the aquare root of a number
 * @n: number to be worked on
 * @i: number to be printed
 * Return: Always 0 (Success)
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to be worked on
 * Return: 0 if successful, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
