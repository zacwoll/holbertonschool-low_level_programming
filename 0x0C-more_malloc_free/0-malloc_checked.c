#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocated the needed memory
  * @b: amount of memory that needs allocating
  * Return: void *
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
