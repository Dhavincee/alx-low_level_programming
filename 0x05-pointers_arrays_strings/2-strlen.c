#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns lenght of a string
 *
 * @s: string to be used
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
