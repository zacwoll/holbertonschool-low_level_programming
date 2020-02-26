#include "holberton.h"

/**
  * _print_rev_recursion - prints a string followed by a newline
  * @s: pointer to string
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	};
}
