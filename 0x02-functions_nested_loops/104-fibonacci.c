#include <stdio.h>
/**
  * main - Entry Point
  * Return: void
  */
int main(void)
{
	int i = 3, is_big = 0;
	unsigned long a = 1, b = 2, term = 0, a_2 = 0, b_2 = 0, term_2 = 0;
	unsigned long cutoff = 10000000000000000;

	printf("%lu, %lu", a, b);
	for (; i < 100; i++)
	{
		printf(", ");
		term = a + b;
		if (term > cutoff)
			is_big = 1;
		if (is_big)
		{
			term_2 = term / cutoff + a_2 + b_2;
			term = term % cutoff;
			printf("%lu", term_2);
			printf("%016lu", term);
			a_2 = b_2;
			b_2 = term_2;
		}
		else
		{
			printf("%lu", term);
		}
		a = b;
		b = term;
	}
	return (0);
}
