#include "holberton.h"

/**
  * _strdup - copies a string to new memory
  * @str: string to be copied
  * Return: char *, string on pass, NULL on failure
  */
char *_strdup(char *str)
{
	char *dup = NULL;
	int str_length, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	str_length = i;

	dup = malloc(i + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < str_length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
