#include "search_algos.h"

/**
 * advanced_binary - binary search but the first index
 * @array: *ptr to int array
 * @size: size of int array
 * @value: key to search for
 * Return: first index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (!array)
		return (-1);
	while (1)
	{
		for (mid = low, printf("Searching in array: "); mid <= high;
			mid++)
		printf("%d%s", array[mid], mid == high ? "\n" : ", ");
		mid = low + (high - low) / 2;

		if (low == mid)
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value || array[mid - 1] == value)
			high = mid;
		else
			return (mid);
	}
}
