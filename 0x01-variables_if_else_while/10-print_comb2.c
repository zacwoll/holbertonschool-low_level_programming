#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry Point
  * Description: Prints the alphabet in lowercase, followed by a new line
  * Return: 0 (Success)
  */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		for (b = 0; b < 10; b++)
		{
			putchar(48 + b);
			if (a != 9 && b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
