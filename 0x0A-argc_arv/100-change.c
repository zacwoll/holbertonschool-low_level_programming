#include <stdio.h>

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
	return num_coins;
}

int main(int argc, char **argv)
{
	int change, num;

	if (argc != 2)
	{
		printf ("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
		printf("%d\n", fewest_coins(change));
}
