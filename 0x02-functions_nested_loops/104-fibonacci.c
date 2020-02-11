#include <stdio.h>
/**
  * main - Entry Point
  * Return: void
  */
int main(void)
{
	int i = 2;
	unsigned long a = 1, b = 2, term = 0, a_2 = 0, b_2 = 0, term_2 = 0;
	unsigned long cutoff = 10000000000000000;

	printf("%lu, %lu", a, b);
	for (; i < 99; i++)
	{
		if (i < 98)
			printf(", ");
		term = a + b;
		if (term > cutoff)
		{
			term_2 = term / cutoff + a_2 + b_2;
			term = term % cutoff;
			printf("%lu%lu", term_2, term);
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
