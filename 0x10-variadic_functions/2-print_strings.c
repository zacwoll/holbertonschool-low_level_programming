#include "variadic_functions.h"

/**
  * print_strings - prints string arguments
  * @seperator: seperator string
  * @n: string count
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *p;

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ag, char *);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
			printf("(nil)");
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ag);
}
