#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints using linear search
 * @array: *ptr to array
 * @size: size of array
 * @value: key to search for
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
