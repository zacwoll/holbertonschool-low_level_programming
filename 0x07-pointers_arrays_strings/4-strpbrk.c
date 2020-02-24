#include "holberton.h"
#include <stddef.h>
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to be searched
  * @accept: set of bytes that are search terms
  * Return: char pointer to byte in s that matches accept first
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	s = NULL;
	return (s);
}
