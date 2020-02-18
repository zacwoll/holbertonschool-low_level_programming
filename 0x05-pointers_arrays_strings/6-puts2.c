#include "holberton.h"

/**
  * puts2 - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
