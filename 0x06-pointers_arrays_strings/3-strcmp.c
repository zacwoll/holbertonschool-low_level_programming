#include "holberton.h"

/**
  * _strcmp - compares the values of two strings left to right
  * @s1: string 1
  * @s2: string 2
  * Return: int, first difference in ascii values
  */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2)
	{
		diff = *s1++ - *s2++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}
