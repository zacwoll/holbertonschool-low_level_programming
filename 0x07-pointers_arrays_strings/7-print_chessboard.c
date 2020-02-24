#include "holberton.h"

/**
  * print_chessboard - prints the chessboard
  * @a: chessboard data
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int i;

	for (; (*a)[8]; a++)
	{
		for (i = 0; i < 8; i++)
		{
			printf("%c", (*a)[i]);
		}
		printf("\n");
	}
}
