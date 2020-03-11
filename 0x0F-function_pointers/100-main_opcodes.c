#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry Point
  * @argc: argument count
  * @argv: argument vector
  * Return: int
  */
int main(int argc, char **argv)
{
	/* declarations */
	int i;
	unsigned char *p = (char *) main;
	/* input checking */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* print the opcodes */
	for (i = 0; i < (atoi(argv[1]) - 1); i++, p++)
		printf("%02x ", *p);
	printf("%02x\n", *p);

	return (0);
}
