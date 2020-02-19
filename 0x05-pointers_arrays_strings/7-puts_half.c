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

	n /= 2;

	while (str[n])
	{
		_putchar(str[n++]);
	}
}
