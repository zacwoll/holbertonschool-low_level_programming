#include "holberton.h"
/**
  * print_triangle - Entry Point
  * @n: print triangle of n side length
  * Return: void
  */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = n; j > i + 1; j--)
			_putchar(' ');
		for (j = 0; j < i + 1; j++)
			_putchar('#');
		_putchar('\n');
	}
}
