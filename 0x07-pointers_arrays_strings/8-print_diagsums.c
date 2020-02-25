#include "holberton.h"
#include <stdio.h>

/*
 * print_diagsums - print the sum of two diagonals
 *  of a square matrix of integers.
 * @a: square matrix of integers
 * @size: side length of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	/* i, j are the iterators; left, right are the diags */
	int i, left = 0, right = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			left += a[i];
		if ((i % (size - 1) == 0) && (i < (size * size - 1)))
			right += a[i];
	}
	printf("%d, %d\n", left, right);
}
