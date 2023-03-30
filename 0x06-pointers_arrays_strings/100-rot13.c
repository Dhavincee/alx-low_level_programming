#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - function that encode a string using rot13
 * @str: parameter to be worked upon
 * Return: Always 0 (Success)
 */
char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = ((*p - 'a') + 13) % 26 + 'a';
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			*p = ((*p - 'A') + 13) % 26 + 'A';
		}
		p++;
	}
	return (str);
}
