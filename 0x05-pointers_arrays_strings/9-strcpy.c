#include "holberton.h"

/**
  * _strcpy - copy src string into the dest ptr
  * @dest : destination ptr
  * @src : string to be copied
  * Return: ptr to destination string
  */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
