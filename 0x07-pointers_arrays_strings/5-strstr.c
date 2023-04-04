#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a string
 * @haystack: parent string
 * @needle: sbnstring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_lenght = strlen(needle);

	while (*haystack)
	{
		if (strncmp(haystack, needle, needle_lenght) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
