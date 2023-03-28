#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -  prints every other character of a string
 *
 * @str: parameter to be checked
 *
 * Return: void
 */
void puts2(char *str)
{
	int grep;

	for (grep = 0; str[grep] != '\0'; grep++)
	{
		_putchar(str[grep]);
		grep++;
	}
	_putchar('\n');
}
