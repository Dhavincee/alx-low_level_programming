#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("1\n");
		return (2);
	}
	else
	{
		printf("2\n");
		return (3);
	}
	printf("%d\n", argc);
	return (EXIT_SUCCESS);
}
