#include "holberton.h"
/**
  * cap_string - capitalize all words of a string
  * @c : character pointer to string
  * Return: char pointer
  */
char *cap_string(char *c)
{
	char *p = c;
	char *sep = " \t\n,;.!?\"(){}";
	int cap = 1, i = 0;

	while (*c)
	{
		if (cap)
		{
			if (*c >= 'a' && *c <= 'z')
			{
				*c -= 'a' - 'A';
				cap = 0;
			}
		}
		else if (*c >= 'a' && *c <= 'z')
		{}
		else
		{
			while (sep[i])
			{
				if (*c == sep[i++])
					cap = 1;
			}
			i = 0;
		}
		c++;
	}
	return (p);
}
