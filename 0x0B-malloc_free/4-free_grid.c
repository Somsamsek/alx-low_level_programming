#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previuosly created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
