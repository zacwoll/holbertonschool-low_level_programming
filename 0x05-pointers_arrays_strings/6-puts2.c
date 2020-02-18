#include "holberton.h"

/**
  * puts2 - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts2(char *str)
{
	while ((*(str + 1) != 0) && (*(str + 2) != 0))
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
