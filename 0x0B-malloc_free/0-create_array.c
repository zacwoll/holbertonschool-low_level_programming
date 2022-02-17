#include "holberton.h"

/**
  * create_array - creates an array init with c
  * @size: size of array in characters
  * @c: character to initialize with
  * Return: char *, either to array or to NULL
  */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
