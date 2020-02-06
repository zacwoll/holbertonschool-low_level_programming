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
	int c;
	int d;
	int zero;

	zero = 48; /* 48 is the ascii for 0 */

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (c >= a && d > b)
					{
						putchar(zero + a);
						putchar(zero + b);
						putchar(' ');
						putchar(zero + c);
						putchar(zero + d);
						if (a != 9 || b != 9 || c != 9 || d != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
