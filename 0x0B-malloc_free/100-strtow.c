#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * _strlen - gets the length of a substring
  * @str: string we find substring in
  * @i: index of substring
  * Return: int, length
  */
int _strlen(char *str, int i)
{
	int j;

	for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
	{}
	return (j);
}

/**
  * word_store - returns a char * to a string
  * @s: destination string, given here for freedom
  * @str: source string
  * @word_count: index for s
  * @i: index of substring
  * Return: char *, string on true, NULL on fail
  */
char *word_store(char **s, char *str, int word_count, int i)
{
	char *p;
	int f, j;

	for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
	{}

	/* mallocate the space for the word */
	p = malloc(j * sizeof(char));
	if (p == NULL)
	{
		for (f = 0; f < word_count; f++)
			free(s[f]);
		free(s);
		return (NULL);
	}
	/* Populate the new space with word */
	for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
	{
		p[j] = str[i + j];
	}
	p[j] = '\0';
	return (p);
}

/**
  * strtow - writes the words out of a string into a string array
  * @str: source string
  * Return: char **
  */
char **strtow(char *str)
{
	char **s;
	int i, word_count, is_word = 1, word = 0;

	if (str == NULL)
		return (NULL);
	/* Find the word count */
	for (i = 0; str[i]; i++)
	{
		if (is_word && str[i] != ' ')
			word_count++;

		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			is_word = 1;
		else
			is_word = 0;
	}
	if (word_count == 0)
		return (NULL);
	/* Allocate space for words (char *) */
	s = malloc((word_count + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	is_word = 1;
	for (i = 0; str[i]; i++)
	{
		if (is_word && str[i] != ' ')
		{
			/* write word into s[word] */
			s[word] = word_store(s, str, word, i);
			word++;
		}
		/* Determines if the next set of characters are a word */
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			is_word = 1;
		else
			is_word = 0;
	}
	s[word] = NULL;
	return (s);
}
