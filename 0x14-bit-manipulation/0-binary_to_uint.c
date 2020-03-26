#include "holberton.h"

/**
  * binary_to_uint - binary to int
  * @b: char * containing binary number
  * Return: unsigned int decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, base = 1;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (--i; i >= 0; i--)
	{
		if (b[i] == '1')
			uint += base;
		base *= 2;
	}

	return (uint);
}
