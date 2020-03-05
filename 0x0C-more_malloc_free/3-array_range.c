#include "holberton.h"
#include <stdlib.h>

/**
  * array_range - array with range min-max
  * @min: minimum value in array
  * @max: maximum value in array
  * Return: int
  */
int *array_range(int min, int max)
{
	/* declarations */
	int *ptr, diff = max - min + 1, i;

	if (min > max)
		return (NULL);
	ptr = malloc((diff) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
