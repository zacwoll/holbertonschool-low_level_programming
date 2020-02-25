#include "holberton.h"
#include <stddef.h>
/**
  * _strchr - locates a character in a string
  * @s: string to look inside
  * @c: character to look for
  * Return: a pointer to the first occurence of c in s, or NULL
  */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return s;
	}
	s = NULL;
	return (s);
}
