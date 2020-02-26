#include "holberton.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: char pointer to string
  * Return: int length
  */

int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s++)
	{
		total += _strlen_recursion(s) + 1;
	}
	return (total);
}
