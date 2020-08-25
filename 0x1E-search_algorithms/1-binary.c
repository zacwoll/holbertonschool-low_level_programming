#include "search_algos.h"

/**
 * print_subarray - print subarray between two indexes
 * @array: the array to print
 * @i: start index
 * @j: end index
 */
void print_subarray(int *array, size_t i, size_t j)
{
	size_t k;

	printf("Searching in array: ");
	for (k = i; k < j; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);
}

/**
 * binary_search - searches for a value in a sorted array of ints using binary
 * @array: array to be searched
 * @size: size of array
 * @value: key to search for
 * Return: index of value of -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (i <= j)
	{
		print_subarray(array, i, j);
		mid = (i + j) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			j = mid - 1;
		else if (array[mid] < value)
			i = mid + 1;
	}

	return (-1);
}
