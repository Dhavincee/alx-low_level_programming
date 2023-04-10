#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - functon to concatenates two strings n times
 *
 * @dest: destination string
 *
 * @src: string to be concatenated
 *
 * @n: number of times for string to be concatenated
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int i = 0;

	while (dest[destl] != '\0')
	{
		destl++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (dest);
}
