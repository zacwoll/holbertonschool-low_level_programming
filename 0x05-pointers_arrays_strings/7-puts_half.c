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
	int i, j;

	for (i = 0, j = 0; *s != 0; j++, i++, s++)
	{
	}
	s = str;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = i / 2 + 1;

	for (; i > 0; i--)
	{
		printf("%c\n", *(s + j - i));
	}
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}	
