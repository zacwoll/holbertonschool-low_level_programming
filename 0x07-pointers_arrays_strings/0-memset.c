#include "holberton.h"

/**
  * _memset - fills the first n bytes of the string with the constant byte b
  * @s: string to be filled
  * @b: constant char to fill string
  * @n: number of bytes to fill s with b
  * Return: char pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
