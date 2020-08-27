#include "search_algos.h"

/**
 * binary_search_recur - recursively uses binary search
 * @array: array to be searched
 * @low: lower bound of binary search
 * @high: higher bound of binary search
 * @value: key to search for
 * Return: index of value of -1
 */
int binary_search_recur(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		for (mid = low, printf("Searching in array: "); mid <= high;
			mid++)
		printf("%d%s", array[mid], mid == high ? "\n" : ", ");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			return (binary_search_recur(array, low, mid - 1,
			value));
		else if (array[mid] < value)
			return (binary_search_recur(array, mid + 1, high,
			value));
	}
	return (-1);
}

/**
 * exponential_search - search using exponential search
 * @array: *ptr to array
 * @size: size of array
 * @value: key to be searched for
 * Return: index of the value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high, low = 1;

	if (!array || size == 0)
		return (-1);

	/* set the lower bound */
	while (low < size && array[low] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low *= 2;
	}

	/* set the higher bound */
	if (low >= size)
		high = size - 1;
	else
		high = low;

	printf("Value found between indexes [%lu] = [%lu]\n", low / 2, high);
	return (binary_search_recur(array, low / 2, high, value));
}
