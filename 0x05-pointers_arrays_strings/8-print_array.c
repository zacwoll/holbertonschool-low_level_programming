#include "holberton.h"
#include <stdio.h>
/**
  * print_array - prints an array, followed by a new line
  * @str : string to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int *e = a;

	int i, j;

	for (i = 0; i < n; i++)
		printf("%d\n", e[i]);
}

int main(void)
{
	int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}	
