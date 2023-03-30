#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: first string
 * @src: second string (to be concatenated)
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int destl = 0;
	int i;

	while (dest[destl] != '\0')
		destl++;
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[destl + i] = src[i];
	}
	dest[destl + i] = '\0';
	return (dest);
}

