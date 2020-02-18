#include "holberton.h"

/**
  * swap_int - swaps the value of a with the value of b
  * @a: integer to have b's value
  * @b: integer to have a's value
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
