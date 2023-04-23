#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to be worked on
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		for (i = 1; i * i <= n; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
			else if (i * i > n)
			{
				return (-1);
			}
		}
		return (-1);
	}
}
