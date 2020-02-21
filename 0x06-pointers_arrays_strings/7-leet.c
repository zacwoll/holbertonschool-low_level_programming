#include "holberton.h"

/**
  * leet - converts a string to 'leet' code
  * @c: character pointer to string
  * Return: char pointer to original string.
  */
char *leet(char *c)
{
	char *p = c;
	char *lower = "aeotl";
	char *vals = "43071";
	int i;

	while (*c)
	{
		for (i = 0; lower[i]; i++)
		{
			if (*c == lower[i] || *c == lower[i] - 'a' + 'A')
				*c = vals[i];
		}
		c++;
	}
	return (p);
}
