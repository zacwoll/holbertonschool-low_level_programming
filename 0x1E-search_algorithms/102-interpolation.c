#include "search_algos.h"

/**
 * interpolation_search - search using interpolation search
 * @array: *ptr to sorted array of ints
 * @size: size of array
 * @value: key to be searched for
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
				pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
	}
}
