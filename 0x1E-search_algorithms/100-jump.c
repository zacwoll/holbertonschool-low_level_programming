#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for key using jump search algorithm
 * @array: *ptr to array to be searched
 * @size: size of array
 * @value: key to search for
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int j = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		i += j;
		if (i >= size)
			break;
	}

	printf("Value found between indexes [%u] and [%u]\n", i - j, i);
	i -= j;

	while (array[i] < value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
