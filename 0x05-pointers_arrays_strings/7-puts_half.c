#include "holberton.h"
/**
  * puts_half - prints a string, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void puts_half(char *str)
{
	char *s = str;
	int i = 0;
	
	while (*s)
	{
		s++;
		i++;
	}

	i = i / 2;
	s = str + i;

	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
