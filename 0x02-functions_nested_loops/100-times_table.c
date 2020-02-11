#include "holberton.h"
/* potentially add a newline after the times table */
/**
  * print_times_table - prints times table up to n
  * @n: the integer up to which the times table is printed
  * Return: void, prints to output
  */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 16 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				product = i * j;
				if (product > 99)
				{
					_putchar(product / 100 + '0');
					_putchar(product / 10 % 10 + '0');
				}
				else if (product > 9)
				{
					_putchar(' ');
					_putchar(product / 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product % 10 + '0');
				if (j < n - 1)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
