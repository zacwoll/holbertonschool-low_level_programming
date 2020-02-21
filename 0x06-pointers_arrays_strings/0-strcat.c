#include "holberton.h"

/**
  * _strcat - combines two strings
  * @dest: destination string
  * @src: source string
  * Return: char pointer
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = *src;

	return (p);
}
