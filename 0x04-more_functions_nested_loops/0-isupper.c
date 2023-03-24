#include "main.h"
/**
 * _isupper - function that checks for upper case
 *
 * @c: parameter to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwis e
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

