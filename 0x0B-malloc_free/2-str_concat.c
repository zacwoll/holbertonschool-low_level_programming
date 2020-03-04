#include <stdlib.h>

/**
  * str_concat - concatenates two strings into new memory
  * @s1: string 1
  * @s2: string 2
  * Return: char *, concatenated string or NULL
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		p[k + i] = s2[k];
	}
	p[i + j] = '\0';
	return (p);
}
