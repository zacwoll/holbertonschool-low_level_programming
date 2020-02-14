#include "holberton.h"
/**
  * _isupper - Entry Point
  * @c: ascii character to be checked
  * Return: 1 (Success), 0 (Fail)
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
