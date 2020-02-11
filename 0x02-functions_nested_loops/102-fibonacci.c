#include <stdio.h>
/**
  * main - Entry Point
  * Return: void
  */
int main(void)
{
	int i = 3, n = 50;
	unsigned long a = 1, b = 2, term;

	printf("%lu, %lu, ", a, b);
	for (; i < n; i++)
	{
		term = a + b;
		a = b;
		b = term;
		printf("%lu, ", term);
	}
	term = a + b;
	printf("%lu\n", term);
	return (0);
}
