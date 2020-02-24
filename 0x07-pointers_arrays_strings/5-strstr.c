#include "holberton.h"
#include <stddef.h>

/**
  * _strstr - locates a substring
  * @haystack: string to be searched
  * @needle: search term
  * Return: char pointer to first occurence of needle in haystack
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	/* search through the length of haystack */
	for (; *haystack; haystack++)
	{
		/* check if the substring needle is in haystack */
		for (i = 0; needle[i]; i++)
		{
			/* if *(haystack + i) is end of string, call it quits. */
			if (!(*(haystack + i)))
			{
				haystack = NULL;
				return (haystack);
			}
			/* if there isn't a match, quit searching */
			if (*(haystack + i) != needle[i])
				break;
		}
		/* if the needle loop fully completed, return haystack pointer */
		if (needle[i] == '\0')
			return (haystack);
	}
	/* The loop failed, return NULL */
	haystack = NULL;
	return (haystack);
}
