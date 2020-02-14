#include "holberton.h"
/**
  * _isdigit - checks for digit
  * @c: integer to be checked
  * Return: 1 (Success), 0 (Fail)
  */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
