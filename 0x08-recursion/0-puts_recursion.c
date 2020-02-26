#include "holberton.h"

/**
  * _puts_recursion - prints a string followed by a newline
  * @s: pointer to string
  * Return: void
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s++)
		_puts_recursion(s);
	else
		_putchar('\n');
}
