#include <stdlib.h>
#include <stdio.h>

/**
  * alloc_grid - allocates memory for a grid init to 0
  * @width: width of grid
  * @height: height of grid
  * Return: int **
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;
	/* if width and height are bad values return NULL */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* init arr by pointers */
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	/* return array */
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	else
		return (arr);
}
