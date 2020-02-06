#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry Point
  * Description: Determines a random number's polarity.
  * Return: 0 (Success)
  */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d", n, last);
	if (last != 0)
	{
		if (last > 5)
			puts(" and is greater than 5");
		else
			puts(" and is less than 6 and not 0");
	} 
	else
		puts(" and is 0");
	return (0);
}

