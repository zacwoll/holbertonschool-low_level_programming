#include "holberton.h"

/**
  * factorial - finds the factorial of a given number
  * @n: seed number
  * Return: int, factorial of n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
