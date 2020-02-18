#include "holberton.h"
/**
  * _strcpy - prints an array, followed by a new line
  * @dest : destination array
  * @src : string to be cpied
  * Return: void
  */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;
	char *s = src;

	for (; *(s - 1) != '\0'; a++, s++)
		*a = *s;
	*a = *s;
	return (dest);
}
