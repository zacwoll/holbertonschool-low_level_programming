#include "holberton.h"
#include <stdlib.h>

/**
  * _realloc - reallocate ptr to new_ptr
  * @ptr: old ptr
  * @old_size: old ptr size
  * @new_size: new ptr size
  * Return: void *
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Declarations */
	unsigned int min = new_size, i;
	void *new_ptr;
	/* new minimum */
	if (old_size < min)
		min = old_size;
	else if (old_size == min)
		return (ptr);
	new_ptr = malloc(new_size);
	for (i = 0; i <= min; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
