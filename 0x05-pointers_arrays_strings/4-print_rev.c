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
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	{
		for (j = i - 1; j >= 0; j--)
			_putchar(s[j]);
	}
	_putchar('\n');
}
