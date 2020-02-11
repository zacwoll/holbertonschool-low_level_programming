#include <stdio.h>
/**
  * main - Entry Point
  * Description: prints the alphabet, in lowercase, then newline
  * Return: 0 (Success)
  */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
