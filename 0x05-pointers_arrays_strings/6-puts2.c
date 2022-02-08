#include "holberton.h"

/**
  * puts2 - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts2(char *str)
{
	int len = 0, i;

	while (*(str + len))
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
