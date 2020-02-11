#include <stdio.h>
/**
  * main = Entry Point
  * Return: void
  */
int main(void)
{
	int max = 1024;
	int i, total;

	for (i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	printf("%d\n", total);

	return (0);
}
