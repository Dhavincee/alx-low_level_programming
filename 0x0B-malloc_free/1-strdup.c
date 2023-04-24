#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to be worked on
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *n_str;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	n_str = malloc((len + 1) * sizeof(char));

	if (n_str == NULL)
	{
		return (NULL);
	}
	strcpy(n_str, str);
	return (n_str);
}
