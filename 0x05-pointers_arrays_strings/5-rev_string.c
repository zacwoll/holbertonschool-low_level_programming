#include "holberton.h"
/**
  * rev_string - prints a string in reverse
  * @s : string to be printed
  * Return: void
  */

void rev_string(char *s)
{
	char *c = s, *t = s;
	int len = 0, i;
	char temp;

	for (; *(c + 1); c++, len++)
	{
	}

	if (len % 2 == 0)
		len = len / 2 - 1;
	else
		len = len / 2;

	for (i = 0; i <= len; i++)
	{
		temp = *t;
		*t = *c;
		*c = temp;
		t++;
		c--;
	}

}
