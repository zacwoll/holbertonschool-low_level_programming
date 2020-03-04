#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/* Malloc space for array of pointers that point to words */
/* fill each pointer with words */
/* each word is seperated by spaces */
/* Null terminate */

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
	/* init */
	char *p;
	int f, j;
	/* get the length of the word */
	/* mallocate the space for the word */
	p = malloc(_strlen(str, i) * sizeof(char));
	/* check if malloc failed */
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
	/* Null-Terminate the word */
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
	/* declarations */
	char **s;
	int i, word_count, is_word = 1, word = 0;
	/* Input checking */
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
	/* Allocate space for words (char *) */
	s = malloc((word_count + 1) * sizeof(char *));
	/* Check if malloc failed */
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (is_word && str[i] != ' ')
		{
			/* write word into s[word] */
			s[word] = malloc(_strlen(str, i) * sizeof(char));
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
