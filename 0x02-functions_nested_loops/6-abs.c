#include "holberton.h"
/* given proto is int _abs(int) not sure if allowed to set variable name */
/**
  * _abs - prints the absolute value of input
  * @n: number to be returned in absolute value
  * Return: returns the absolute value of the integer taken as input.
  */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
