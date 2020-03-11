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
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
