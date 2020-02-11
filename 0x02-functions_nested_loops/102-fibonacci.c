#include "holberton.h"
#include <stdio.h>
/**
  * print_fib - prints the first 50 Fibonacci numbers starting with 1 and 2
  * Return: void
  */
void print_fib(void)
{
	int i = 2, n = 50, a = 1, b = 2, term;

	printf("%d, %d, ", a, b);
	for (i; i < n - 1; i++)
	{
		term = a + b;
		a = b;
		b = term;
		printf("%d, ", term);
	}
	term = a + b;
	printf("%d\n", term);
}
