#include "holberton.h"

/**
  * puts2 - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts2(char *str)
{
	_putchar(*str);
	while (!(*(str + 1)) || !(*(str + 2)))
	{
		str += 2;
		_putchar(*str);
	}

	_putchar('\n');
}
