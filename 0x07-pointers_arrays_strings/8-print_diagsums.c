#include "holberton.h"
#include <stdio.h>

/*
 * print_diagsums - print the sum of two diagonals of a square matrix of integers.
 * @a: square matrix of integers
 * @size: side length of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	/* i, j are the iterators; left, right are the diags */
	int i, j, left, right;

	for (i = 0; (*a)[i]; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				left += (*a)[i][j];
			if (size - 1 - i == j)
				right += (*a)[size - 1 - i][j];
		}
	}

	printf("left diagonal = %d", left);
	printf("right diagonal = %d", right);
}
