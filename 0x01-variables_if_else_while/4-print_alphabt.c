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
	char c;

	for (a = 0; a < 26; a++)
	{
		c = 97 + a;

		if (c != 101 && c != 113)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
