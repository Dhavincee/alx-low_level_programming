#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: parameter to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 62; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
