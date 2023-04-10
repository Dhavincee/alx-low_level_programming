#include "main.h"
#include <string.h>

/**
 * _strncpy - function that coipes a string n number of times
 * @dest: first string (destination)
 * @src: second string (to be copied)
 * @n: number of times src will be copied
 * Return: Always char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destl = 0;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destl + i] = src[i];
	for ( ; i < n; i++)
		dest[destl + i] = '\0';

	return (dest);
}
