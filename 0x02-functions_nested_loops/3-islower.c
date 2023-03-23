#include "main.h"
/**
 * _islower - prints lowercase and return 1 if c is lower and 0 otherwise
 *
 * @c: parameter to be printed
 *
 * Return: 1 if successful, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
