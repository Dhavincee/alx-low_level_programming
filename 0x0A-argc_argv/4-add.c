#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vetor
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *d;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (d = argv[i]; *d != '\0'; d++)
		{
			if (!isdigit(*d))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
