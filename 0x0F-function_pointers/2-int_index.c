#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - returns the index in an int array where cmp is true
  * @array: array to be stepped through
  * @size: size of array
  * @cmp: compare function
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* declarations */
	int i;
	/* NULL check */
	if (size <= 0 || (*cmp) == NULL || array == NULL)
		return (-1);
	/* If cmp finds a match, return index */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	/* cmp didnt find anything */
	return (-1);
}
