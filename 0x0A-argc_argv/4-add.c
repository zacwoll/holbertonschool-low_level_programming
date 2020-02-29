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
	int sum = 0, i, part;
	char *err;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		part = strtol(argv[i], &err, 10);
		if (*err == '\0')
		{
			sum += part;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
