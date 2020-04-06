#include "variadic_functions.h"

/**
  * print_numbers - prints int arguments
  * @seperator: seperator string
  * @n: int argument count
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	/* declarations */
	va_list ag;
	unsigned int i;
	/* variadic start */
	va_start(ag, n);
	/* print each int */
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(ag, unsigned int));
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	/* free ag */
	va_end(ag);
}
