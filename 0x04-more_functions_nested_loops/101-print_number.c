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

	if (num / 10 > 0)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
