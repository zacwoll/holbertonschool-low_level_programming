#include <stdio.h>
/**
  * print_sum - prints the sum of the multiples of 3 and 5 up to 1024
  * Return: void
  */
void print_sum(void)
{
	int max = 1024;
	int i, total;

	for (i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	printf("%d\n", total);
}
