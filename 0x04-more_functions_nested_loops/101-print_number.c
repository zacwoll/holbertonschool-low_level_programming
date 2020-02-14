#include "holberton.h"
/**
  * print_number - Entry Point
  * @n: integer to be printed
  * Return: 0 (Success)
  */
void print_number(int n)
{
	unsigned int num, div = 10;
	/*
	 * if number is negative, print -1 then take abs(n)
	 * recursively call this function to print each digit
	 * or, print the front digit and then pass the rest to
	 * the next iteration
	 */
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	if (num > 9)
	{
		/* prints the leftmost digit of current num */
		while (num / div > 9)
		{
			div *= 10;
		}
		_putchar(num / div + '0');
		/* if remainder of number is 0, print the zeroes */
		if (num % div < 10)
		{
			while (div > 10)
			{
				_putchar('0');
				div /= 10;
			}
		}
		print_number(num % div);
	}
	else
	{
		/* print the final zero */
		_putchar(num + '0');
		_putchar('\n');
	}
}
