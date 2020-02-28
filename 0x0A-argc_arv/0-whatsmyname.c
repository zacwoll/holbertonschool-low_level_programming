#include "holberton.h"
#include <stdio.h>

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[0][i]; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
}
