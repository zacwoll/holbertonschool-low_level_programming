#include "holberton.h"

/**
 * flip_bits - flip bits to change num1 into num2 or vice versa
 * @n: binary num1
 * @m: binary num2
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
