#include "holberton.h"
/**
  * print_alphabet - prints the alphaet, in lowercase, then newline
  * Return: 0 (Success)
  */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return;
}
