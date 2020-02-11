#include <stdio.h>
/**
  * liber_abbaci - prints terms in the fibonacci sequence up to 4mil
  * Return: void
  */
void liber_abbaci(void)
{
	int a = 1, b = 2, term = 2;

	printf("%d", a, term);
	while (true)
	{
		if (term > 4000000)
			break;
		printf(", %d", term);
		term = a + b;
		a = b;
		b = term;
	}
}
