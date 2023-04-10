#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area to be pointed to
 * @b: constant byte
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n > 0)
	{
		*d++ = b;
		n--;
	}
	return (s);
}
