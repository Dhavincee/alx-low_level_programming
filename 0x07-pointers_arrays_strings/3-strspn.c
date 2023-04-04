#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: initial segment
 * @accept: string that contains byte
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (!accept[b])
		{
			return (a);
		}
	}
	return (a);
}
