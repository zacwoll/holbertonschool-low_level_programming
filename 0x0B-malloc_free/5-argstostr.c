#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * argstostr - stores arguments as a concatenated string
  * @ac: argc
  * @av: argv
  * Return: char *, stored args or NULL
  */
char *argstostr(int ac, char **av)
{
	/* declarations */
	char *p;
	int len, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	len = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
		{
			p[len] = av[i][j];
		}
		p[len++] = '\n';
	}
	return (p);
}
