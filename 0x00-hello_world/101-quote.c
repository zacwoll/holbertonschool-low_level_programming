#include <stdio.h>
#include <unistd.h>
/**
  * main - Entry point
  * Description: Prints interesting quote, followed by a new line
  * Return: Always 1 (Failure)
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 50);
	return (1);
}
