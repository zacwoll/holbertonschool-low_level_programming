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
	unsigned int i;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	new_ptr = malloc(sizeof(char) * new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
