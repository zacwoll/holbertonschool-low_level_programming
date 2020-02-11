#include <stdio.h>
void print_alphabet_x10(void);
/**
  * main - Entry Point
  * Description:
  * Return: 0 (Success)
  */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
  * print_alphabet_x10 - prints alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}
}
