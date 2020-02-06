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
	int a_one;
	int b_one;
	int a_ten;
	int b_ten;
	int zero;

	zero = 48; /* 48 is the ascii for 0 */

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				a_one = a % 10;
				b_one = b % 10;
				a_ten = a / 10;
				b_ten = b / 10;
				putchar(zero + a_ten);
				putchar(zero + a_one);
				putchar(' ');
				putchar(zero + b_ten);
				putchar(zero + b_one);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
