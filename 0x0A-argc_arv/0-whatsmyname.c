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
	char *name;

	if (argv[1])
		name = argv[1];
	else
		name = argv[0];

	printf("%s\n", name);
	(void)argc;
	return (0);
}
