#include "holberton.h"

/**
  * findRoot - finds the root of n using iterator i recursively
  * @n: value we find the root of
  * @i: iterator we count up from and calculate the square
  * Return: int, root of n
  */
int findRoot(int n, int i)
{
	int square = i * i;

	if (square == n)
	{
		return (i);
	}
	else if (square > n)
	{
		return (-1);
	}
	else
		findRoot(n, i + 1);
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: find the sqrt of n
  * Return: int, sqrt(n)
  */
int _sqrt_recursion(int n)
{
	return (findRoot(n, 1));
}
