#include "holberton.h"

/**
  * rot13 - encodes a string using rot13
  * @c: character pointer to source
  * Return: character pointer to source
  */
char *rot13(char *c)
{
	char *p = c;
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *rot13 = "nopqrstuvwxyzabcdefghijklm";
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
			else if (*c == alpha[i] - 'a' + 'A')
			{
				*c = rot13[i] - 'a' + 'A';
				break;
			}
		}
		c++;
	}

	return (p);
}
