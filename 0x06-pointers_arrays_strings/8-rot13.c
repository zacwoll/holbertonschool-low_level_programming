#include "holberton.h"

/**
  * rot13 - encodes a string using rot13
  * @c: character pointer to source
  * Return: character pointer to source
  */
char *rot13(char *c)
{
	char *p = c;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (*c)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*c == alpha[i])
			{
				*c = rot13[i];
				break;
			}
		}
		c++;
	}

	return (p);
}
