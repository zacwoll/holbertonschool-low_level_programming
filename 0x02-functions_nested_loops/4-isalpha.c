#include "holberton.h"
#include <ctype.h>
/**
  * _isalpha - determines whether or not a character is alphanumeric
  * @c: ascii code for letter to be checked
  * Return: 1 (Success) 0 (Fail)
  */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
