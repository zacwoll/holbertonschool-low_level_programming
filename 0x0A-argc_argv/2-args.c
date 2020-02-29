#include "holberton.h"

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char **argv)
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
