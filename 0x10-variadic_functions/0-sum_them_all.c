#include "variadic_functions.h"

/**
  * sum_them_all - sum all arguments
  * @n: number of arguments
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);

	return (sum);
}
