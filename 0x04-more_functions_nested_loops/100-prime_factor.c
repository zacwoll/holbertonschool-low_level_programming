#include <stdio.h>
/**
  * main - Entry Point
  * Description:
  * Return: 0 (Success)
  */
int main(void)
{
	long i = 1, largest = 1;
	static long target = 612852475143; /* target number */
	static long square_root = 782848; /* square root of target */
	long a = target;

	if (target % 2 == 0)
		largest = 2;
	if (target % 3 == 0)
		largest = 3;

	for (i = 3; i <= square_root; i += 2)
	{
		while (a % i == 0)
		{
			largest = i;
			a = a / i;
		}
	}

	if (a > 2)
		largest = a;

	printf("%ld\n", largest);
	return (0);
}
