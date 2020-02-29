#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char **argv)
{
	int i, product = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
