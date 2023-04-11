#include <stdlib.h>

/**
 * free_grid - a function that free aloc space of 2d array
 *
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: Always void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
