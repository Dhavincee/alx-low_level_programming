#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: The input string.
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
		str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
		str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
