#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
	{
		if (s1[j] > s2[j])
			return (s1[j] - s2[j]);
		else if (s1[j] < s2[j])
			return (s1[j] - s2[j]);
	}
	if (s1[j] != '\0')
		return (s1[j]);
	else if (s2[j] != '\0')
		return (-s2[j]);
	else
		return (0);
}
