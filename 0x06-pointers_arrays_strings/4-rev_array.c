#include "holberton.h"

/**
  * reverse_array - reverses an array
  * @a: pointer to array
  * @n: size of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int temp;
	int *end = &a[n - 1];
	/* i = 0, half = n / 2; */

	while (a < end)
	{
		temp = *a;
		*a++ = *end;
		*end-- = temp;
	}
/*
*for (; i < n / 2; i++)
*{
*	temp = *a;
*	*a = start[n - i - 1];
*	start[n - i - 1] = temp;
*	a++;
*}
*/
/*
*for (; n > half; n--)
*{
*	temp = *a;
*	*a = start[n - 1];
*	start[n - 1] = temp;
*	a++;
*}
*/
}
