#include "holberton.h"
/**
  * cap_string - capitalize all words of a string
  * @c : character pointer to string
  * Return: char pointer
  */
char *cap_string(char *c)
{
	char *p = c, *prev = c;
	 char *sep = " \t\n,;.!?\"(){}";
	int i = 0, cap = 1;

	while (*c)
	{
		for (i = 0; sep[i]; i++)
		{
			if (*prev == sep[i])
				cap = 1;
		}
		if (cap)
		{
			if (*c >= 'a' && *c <= 'z')
				*c -= 'a' - 'A';
			cap = 0;
		}
		prev = c;
		c++;
	}
	return (p);
}
