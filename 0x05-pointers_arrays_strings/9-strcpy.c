#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies string to another variable
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	return (dest);
}
