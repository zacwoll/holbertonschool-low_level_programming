#include "holberton.h"

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
}
