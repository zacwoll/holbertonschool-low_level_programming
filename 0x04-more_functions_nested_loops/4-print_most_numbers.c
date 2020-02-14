#include "holberton.h"
/**
  * print_most_numbers - Entry Point
  * Return: 0 (Success)
  */
void print_most_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
