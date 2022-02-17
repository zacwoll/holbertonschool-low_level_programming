#include "holberton.h"

/**
  * alloc_grid - allocates memory for a grid init to 0
  * @width: width of grid
  * @height: height of grid
  * Return: int **
  */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int *row = NULL;
	int x, y;

	/* width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* malloc'd space for height amount of int *'s */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* begin filling grid with rows */
	for (y = 0; y < height; y++)
	{
		/* instantiate a row */
		row = malloc(width * sizeof(int));
		if (row == NULL)
		{
			for (y--; y >= 0; y--)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}

		/* fill the row with zeroes */
		for (x = 0; x < width; x++)
		{
			row[x] = 0;
		}

		grid[y] = row;
	}

	return (grid);
}