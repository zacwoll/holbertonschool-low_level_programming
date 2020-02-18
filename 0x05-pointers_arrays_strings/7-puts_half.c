#include "holberton.h"
#include <stdio.h>
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

	i = i / 2 - 1;
	s = str + i;
	while (*s++)
	{
		_putchar(*s);
	}
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}	
