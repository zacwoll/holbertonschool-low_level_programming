#include <stdio.h>
/**
  * print_fib_98 - prints the first 98 Fibonacci numbers starting at 1, 2
  * Return: void
  */
int main(void)
{
	int i = 2;
	unsigned long a = 1, b = 2, term = 0, a_2 = 0, b_2 = 0, term_2 = 0;
	unsigned long cutoff = 10000000000000000;
	printf("%d, %d", a, b);
	for (i; i < 99; i++)
	{
		if (i < 98)
			printf(", ");
		term = a + b;
		if (term > cutoff)
		{
			term_2 = term / cutoff + a_2 + b_2;
			term = term % cutoff;
			printf("%d%d", term_2, term);
			a_2 = b_2;
			b_2 = term_2;
		}
		else
		{
			printf("%d", term);
		}
		a = b;
		b = term;
	}
	return 0;
}
