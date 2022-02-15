#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	// arguments < 2 means no result
	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		// loop for each character in each argv
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			// check if character is not digit
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		// Assuming no errors, sum the arguments
		sum += atoi(argv[i]);
	}
	
	printf("%d\n", sum);
	return (0);
}
