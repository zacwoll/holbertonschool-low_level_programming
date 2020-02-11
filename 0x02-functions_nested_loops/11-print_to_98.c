#include "holberton.h"
#include <stdio.h>
/* potential error, how many digits are we using? */
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: print from n to 98
  * Return: void, prints from n to 98
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
