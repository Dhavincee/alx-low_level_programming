#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to be worked on
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (-1);
	}
	else
	{
		return (__sqrt(n, 0));
	}

	int i;

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
