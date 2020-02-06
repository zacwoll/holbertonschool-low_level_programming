#include <stdlib.h>
/**
  * main - Entry Point
  * Description: Prints the alphabet in lowercase, followed by a new line
  * Return: 0 (Success)
  */
int main(void)
{
	int a = 0;

	for (a; a < 26; a++)
	{
		char c = 97 + a;

		putchar(c);
	}
	a = 0;
	for (a; a < 26; a++)
	{
		char c = 65 + a;

		putchar(c);
	}
	putchar('\n');
	return (0);
}
