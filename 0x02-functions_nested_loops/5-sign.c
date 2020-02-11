#include "holberton.h"
/**
  * print_sign - prints the sign of n
  * @n: integer to be checked
  * Return: -1 if negative, 0 if 0, 1 if positive
  */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
