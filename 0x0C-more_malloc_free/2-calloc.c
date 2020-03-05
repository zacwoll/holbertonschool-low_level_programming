#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - malloc but with zeroes
  * @nmemb: n members
  * @size: size of type
  * Return: void *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < nmemb * size; n++)
		*((char *)ptr + n) = 0;
	return (ptr);
}
