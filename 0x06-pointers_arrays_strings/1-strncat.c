#include "holberton.h"
/**
  * _strncat - concatenate strings up to n bytes
  * @dest: destination string
  * @src: source string
  * @n: size of copy
  * Return: char pointer of destination
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest)
	{
		dest++;
	}

	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest++ = *src++;
		}
		else
		{
			*dest = '\0';
			break;
		}
	}

	return (p);
}
