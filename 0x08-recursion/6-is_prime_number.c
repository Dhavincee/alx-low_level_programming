#include "main.h"

/**
 * is_prime_number - function to check if a number is a prime
 * @n: integer to be checked
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n % 1 == 0 && n % 2 == 0)
	{
		return (0);
	}
	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
		{
			return (0);
		}
	}
	return (1);
}
