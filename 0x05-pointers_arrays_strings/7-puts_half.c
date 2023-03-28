#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: parameter to be checked
 *
 * Return: void
 */
void puts_half(char *str)
{
	int f;
	int julian = 0;

	for (f = 0; str[f] != 0; f++)
		julian++;
	if (julian % 2 == 0)
	{
		for (f = julian / 2; str[f] != '\0'; f++)
			_putchar(str[f]);
		_putchar('\n');
	}
	else if (julian % 2 != 0)
	{
		for (f = (julian - 1) / 2; str[f] != '\0'; f++)
			_putchar(str[f]);
		_putchar('\n');
	}
}
