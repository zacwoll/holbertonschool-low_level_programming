#include "holberton.h"

/**
  * get_endianness - returns the endianness of the system
  * Return: int, 0 if little endian, not zero if big endian
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
