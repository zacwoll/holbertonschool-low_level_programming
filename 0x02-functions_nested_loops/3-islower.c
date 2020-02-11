#include "holberton.h"
/**
  * _islower - checks if lowercase
  * @c: integer to be checked
  * Return: 1 if true, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
