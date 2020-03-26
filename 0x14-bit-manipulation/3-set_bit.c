#include "holberton.h"

/**
  * set_bit - sets bit at index in binary number
  * @n: binary number
  * @index: index to be set
  * Return: int, 1 if true, -1 if false
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n |= (1 << index);
	return (1);
}
