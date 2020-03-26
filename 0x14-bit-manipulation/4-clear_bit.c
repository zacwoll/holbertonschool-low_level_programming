#include "holberton.h"

/**
  * clear_bit - resets index bit to zero
  * @n: binary number
  * @index: index to be cleared
  * Return: int, 1 if true, -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	/* if n has a 1 at index then remove it */
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
