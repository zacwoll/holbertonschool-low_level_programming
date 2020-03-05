#include "holberton.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	/* declarations */
	int *ptr, diff = max - min, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < diff + 1; i++)
	{
		ptr[i] = min + i;
	}
	/* does the above work as intended */
	return (ptr);
}
