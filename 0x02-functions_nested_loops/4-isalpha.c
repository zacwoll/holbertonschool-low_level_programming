#include "holberton.h"
/**
  * _isalpha - determines whether or not a character is alphanumeric
  * @c: ascii code for letter to be checked
  * Return: 1 (Success) 0 (Fail)
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
