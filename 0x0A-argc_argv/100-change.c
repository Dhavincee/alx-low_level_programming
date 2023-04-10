#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	int i;
	int coins[5] = {25, 10, 5, 2, 1};
	int coin_num = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		coin_num += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", coin_num);
	return (EXIT_SUCCESS);
}
