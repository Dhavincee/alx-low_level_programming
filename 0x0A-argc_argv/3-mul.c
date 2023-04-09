#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (EXIT_SUCCESS);
}
