#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char **argv)
{
	/* input checking */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* print the result of get_op_func */
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
