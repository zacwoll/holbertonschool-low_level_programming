#include "holberton.h"

/**
  * print_rev - prints a string in reverse, followed by a new line
  * @s : string to be printed
  * Return: void
  */

void print_rev(char *s)
{
	int size = 0, i = 0;

	while (*s != 0)
	{
		size++;
		s++;
	}
	for (i = 0; i < size; i++)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
