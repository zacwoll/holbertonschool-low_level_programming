#include <stdio.h>

/**
  * main - Entry Point
  * @argc: argument count
  * @argv: argument vector
  * Return: int
  */
int main(int argc, char **argv)
{
	int i = 0;
	/* There are two args */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* number_of_bytes is nonnegative */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* print the opcodes */
	unsigned char *mf = (unsigned char *)argv[0];

	for (i = 0; i < (atoi(argv[1]) - 1); i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", (unsigned int)mf[i]);
	}
	printf("\n");

	return (0);
}
