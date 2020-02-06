#include <stdlib.h>
/**
  * main - Entry Point
  * Description: Prints the alphabet in lowercase, followed by a new line
  * Return: 0 (Success)
  */
int main(void)
{
	int a = 0;

	for (a; a < 16; a++)
	{
		int b = 48 + a;

		if (a > 9)
			b = 97 + a % 10;
		putchar(b);
	}
	putchar('\n');
	return (0);
}
