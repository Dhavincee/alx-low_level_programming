#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be considered
 * @accept: string containing the bytes
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *l = accept;

		while (*l != '\0')
		{
			if (*s == *l)
			{
				return (s);
			}
			l++;
		}
		s++;
	}
	return (NULL);
}
