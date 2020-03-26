#include "holberton.h"

/**
  * flip_bits - finds how many flips it takes to set n to m
  * @n: binary num1
  * @m: binary num2
  * Return: unsigned int, count of flips
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = n ^ m;
	int diff_count = 0, place = sizeof(n) * 8;

	for (; place; place--)
	{
		diff_count += i & 1;
		i >>= 1;
	}

	return (diff_count);
}
