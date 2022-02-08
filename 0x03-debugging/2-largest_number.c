#include "main.h"

/**
  * largest_number - returns the largest of 3 numbers
  * @a: first integer
  * @b: second integer
  * @c: third integer
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int largest;

	// The logic was off, here (a > b && b > c) does not cover all cases
	// where a is the largest number
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= c && b >= a)
		largest = b;
	else
		largest = c;

	return (largest);
}
