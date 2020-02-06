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

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
