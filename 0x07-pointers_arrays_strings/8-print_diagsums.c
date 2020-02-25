#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of diagonals in a square matrix
  * @a: the matrix
  * @size: the square size
  *
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int left = 0;
	int right = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			left += a[i];
		}
		if (i % (size - 1) == 0 && (i > 0 && (i < (size * size - 1))))
		{
			right += a[i];
		}
	}
	printf("%d, %d\n", left, right);
}
