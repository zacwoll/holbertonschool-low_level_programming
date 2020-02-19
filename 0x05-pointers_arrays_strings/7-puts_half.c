#include "holberton.h"
/**
  * puts_half - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts_half(char *str)
{
	int n = 0;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 0)
		n = n / 2;
	else
		n = n / 2 + 1;

	while (str[n])
	{
		_putchar(str[n++]);
	}
	_putchar('\n');
}
