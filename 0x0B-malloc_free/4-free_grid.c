#include "holberton.h"

/**
  * free_grid - free's the memory of a grid
  * @grid: 2D array of ints
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
