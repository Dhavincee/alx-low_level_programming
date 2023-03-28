#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that revers a string
 *
 * @s: parameter to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char fred;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < i / 2; j++)
		{
			fred = s[i];
			s[i] = s[i - j - 1];
			s[i - j - 1] = fred;
		}
	}
}
