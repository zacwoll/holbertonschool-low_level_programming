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
		c = 122 - a;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
