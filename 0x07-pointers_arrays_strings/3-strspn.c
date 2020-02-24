#include "holberton.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be looked inside
  * @accept: substring sought after
  * Return: unsigned int, the number of bytes in s from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;
	int term = 0;

	for (i = 0; s[i]; i++)
	{
		term = 0;
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				term = 1;
		}
		if (!term)
			break;
	}
	return (i);
}
