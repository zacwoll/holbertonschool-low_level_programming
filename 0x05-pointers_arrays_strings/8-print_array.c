#include "holberton.h"
/**
  * print_array - prints an array, followed by a new line
  * @a : pointer to array
  * @n : size of array
  * Return: void
  */

void print_array(int *a, int n)
{
	int *e = a;

	int i, j;

	for (i = 0; i < n; i++)
		printf("%d\n", e[i]);
}
