#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function that copies momory area
 * @dest: memory destination
 * @src: memory area
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *vel_dest = dest;
	char *vel_src = src;

	while (n > 0)
	{
		*vel_dest++ = *vel_src++;
		n--;
	}
	return (dest);
}
