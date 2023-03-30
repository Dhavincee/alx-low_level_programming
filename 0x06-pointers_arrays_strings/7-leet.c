#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - function that encodes a string
 *
 * @str: parameter to be checked
 *
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = num[j];
			break;
			}
		}
	}
	return (str);
}
