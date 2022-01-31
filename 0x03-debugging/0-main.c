#include "holberton.h"

/**
  * main - tests function that prints if integer is positive or negative
  * Return: 0
  */

int main(void)
{
	int i;

	// Here, I wanted to check the function using 0 instead of 98
	// So I changed i = 98; => i = 0;
	i = 0;
	positive_or_negative(i);

	return (0);
}
