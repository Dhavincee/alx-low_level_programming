#include "main.h"

/**
 * is_prime_number - function to check if a number is a prime
 * @n: integer to be checked
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 1 == 0 && n % 2 == 0 && n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
