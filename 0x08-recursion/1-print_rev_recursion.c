#include "holberton.h"

/**
  * _print_rev_recursion - prints a string followed by a newline
  * @s: pointer to string
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	char *next = s;
	if (*next++)
	{
		_print_rev_recursion(next);
		_putchar(*s++);
	};
}
