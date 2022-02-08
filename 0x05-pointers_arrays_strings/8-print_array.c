#include "holberton.h"
#include <stdio.h>

/**
  * print_array - prints an array, followed by a new line
  * @a : pointer to array
  * @n : size of array
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
