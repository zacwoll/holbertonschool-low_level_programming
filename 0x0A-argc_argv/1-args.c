#include "holberton.h"

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char **argv)
{
	(void)argv;
	/* opted not to cover the case that there's more than 9 args */
	_putchar(argc + '0' - 1);
	_putchar('\n');
	return (0);
}
