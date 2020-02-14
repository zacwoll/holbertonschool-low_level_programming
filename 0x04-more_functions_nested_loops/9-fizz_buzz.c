#include <stdio.h>
/**
  * main - Entry Point
  * Description:
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		if (i < 100)
			rintf(" ");
	}
	return (0);
}
