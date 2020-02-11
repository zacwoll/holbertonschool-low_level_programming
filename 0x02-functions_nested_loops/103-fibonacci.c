#include <stdio.h>
/**
  * main - Entry Point
  * Return: void
  */
int main(void)
{
	int loop = 1;
	unsigned int total = 0, a = 1, b = 2, term = 2;

	while (loop)
	{
		if (b % 2 == 0)
			total += term;
		if (term > 4000000)
			break;
		term = a + b;
		a = b;
		b = term;
	}
	printf("%u\n", total);
	return (0);
}
