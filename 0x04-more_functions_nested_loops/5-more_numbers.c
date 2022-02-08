#include "holberton.h"
/**
  * more_numbers - Entry Point
  * Return: void
  */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 > 0)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			// After 9: 1, 1, 1, 1, 1
			_putchar(i % 10 + '0');
			// 0 - 9 0 - 4
		}
		_putchar('\n');
	}
}