#include "holberton.h"
#include <stdio.h>

/**
  * _atoi - convert a string into an integer
  * @s : pointer to string
  * Return: int that has been converted from a character string
  */
int _atoi(char *s)
{
	char *ele = s;
	int num = 0, negative = 0, is_num = 0;

	while (*ele)
	{
		if (*ele == '+')
			negative += 1;
		else if (*ele == '-')
			negative -= 1;

		if (*ele >= '0' && *ele <= '9')
		{
			num *= 10;
			num += *ele - '0';
			is_num = 1;
		}
		else if (is_num)
			break;
		ele++;
	}
	if (negative < 0)
		num = -num;
	return (num);
}
