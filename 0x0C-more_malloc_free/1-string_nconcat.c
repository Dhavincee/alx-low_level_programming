#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *gra;
	unsigned int s1_l, s2_l, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_l = strlen(s1);
	s2_l = strlen(s2);

	if (n >= s2_l)
	{
		n = s2_l;
	}

	gra = malloc((s1_l + n + 1) * (sizeof(char)));
	if (gra == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		gra[s1_l + 1] = s2[i];
	}
	gra[s1_l + n] = '\0';
	return (gra);
}

