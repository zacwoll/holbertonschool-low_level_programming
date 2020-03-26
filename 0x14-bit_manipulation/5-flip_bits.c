#include "holberton.h"

/**
 * flip_bits - Return how many bits to flip to go to from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = n ^ m;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}

	return (count);
}
