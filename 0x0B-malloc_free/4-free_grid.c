#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: parameter to be checked
 * @height: height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
