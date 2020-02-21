#include "holberton.h"

/**
  * _strncpy - copys n characters of a string into a destination
  * @dest: destination string
  * @src: source string
  * @n: size of copy operation
  * Return: char pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest++ = *src++;
		}
		else
		{
			*dest++ = '\0';
		}
	}

	return (p);
}
