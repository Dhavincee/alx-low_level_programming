#include "main.h"
/**
 * print_sign - function that prints signs
 *
 * @n: parameters to be checked
 *
 * Return: 1 if successful, 0 if zero and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n >= 0)
	{
		_putchar('+');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
