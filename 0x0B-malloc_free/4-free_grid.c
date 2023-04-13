#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimentional grid in a previous
 * task
 * @grid: the grid we will free up
 * @height: the number of rows in the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j  = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
