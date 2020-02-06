#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry Point
  * Description: Prints the alphabet in lowercase, followed by a new line
  * Return: 0 (Success)
  */
int main(void)
{
	int a = 0;

	for (a; a < 10; a++)
	{
		putchar(a + 48);
		// 48 is the ascii code for 0
	}
	putchar('\n');
	return (0);
}
