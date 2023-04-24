#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *str;

	if (ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	str[k] = '\n';
	k++;
	}
	str[k] = '\0';
	return (str);
}

