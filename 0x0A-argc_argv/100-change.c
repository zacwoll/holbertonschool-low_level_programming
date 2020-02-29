#include <stdio.h>
#include <stdlib.h>
/**
  * fewest_coins - returns the fewest number of coins that make up n
  * @n: change that will be split into fewest coins
  * Return: int
  */
int fewest_coins(int n)
{
	int num_coins = 0;

	while (n / 25 > 0)
	{
		num_coins++;
		n -= 25;
	}
	while (n / 10 > 0)
	{
		num_coins++;
		n -= 10;
	}
	while (n / 5 > 0)
	{
		num_coins++;
		n -= 5;
	}
	while (n / 1 > 0)
	{
		num_coins++;
		n -= 1;
	}
	return (num_coins);
}

/**
  * main - Entry Point
  * @argc: number of arguments
  * @argv: vector of arguments
  * Return: int
  */
int main(int argc, char **argv)
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
		printf("%d\n", fewest_coins(change));
	return (0);
}
