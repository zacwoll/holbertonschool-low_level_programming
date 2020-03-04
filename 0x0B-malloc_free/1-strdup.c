#include <stdlib.h>

/**
  * _strdup - copies a string to new memory
  * @str: string to be copied
  * Return: char *, string on pass, NULL on failure
  */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	p = malloc((i + 1) * sizeof(char));
	if (p == NULL || str == NULL)
	{
		free(p);
		return (NULL);
	}
	for (; i >= 0; i--)
	{
		p[i] = str[i];
	}
	return (p);
}
