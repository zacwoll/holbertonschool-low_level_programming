#include "holberton.h"

/**
  * string_toupper - converts a string to uppercase
  * @c: char pointer to string
  * Return: char pointer to string
  */
char *string_toupper(char *c)
{
	char *p = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 'a' - 'A';
		c++;
	}
	return (p);
}
