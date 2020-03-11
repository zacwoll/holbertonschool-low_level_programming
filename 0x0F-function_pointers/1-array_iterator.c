#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function with input from an array
  * @array: array to be stepped through
  * @size: size of array in elements
  * @action: function to be executed
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
