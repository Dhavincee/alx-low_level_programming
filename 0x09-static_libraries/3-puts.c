#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 *
 * @str: variable containing string
 *
 * Return: void
 */
void _puts(char *str)
{
	int v;

	for (v = 0; str[v] != '\0'; v++)
	{
		putchar(str[v]);
	}
	putchar('\n');
}
