#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * @grid: 2 dimensional arrays
 * @height: Size
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
