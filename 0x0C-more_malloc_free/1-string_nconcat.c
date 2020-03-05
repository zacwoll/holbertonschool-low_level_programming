#include "holberton.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates n bytes from string2
  * @s1: string to be appended to
  * @s2: string to have n bytes appended
  * @n: number of bytes to append to string 1
  * Return: char *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declarations */
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j] && j < n; j++)
	{}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
