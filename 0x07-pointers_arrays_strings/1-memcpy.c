#include "holberton.h"

/**
  * _memcpy - fills the first n bytes from src to dest with the constant byte b
  * @dest: string to be filled
  * @src: source to copy from
  * @n: number of bytes to fill dest with source
  * Return: char pointer to s
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
