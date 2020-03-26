#include "holberton.h"

/**
  * get_bit - get bit at index
  * @n: binary number to be searched through
  * @index: index of bit to be returned
  * Return: int, 1 if true, -1 if false
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
