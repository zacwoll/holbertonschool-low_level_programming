#include "holberton.h"

/**
 * _wildcmp - Recursively check if a string is a palindrome
 * @s1: The first string
 * @s2: The second string
 * Return: int, 1 if true, 0 if false
 */
int _wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2)
		return (_wildcmp(s1 + 1, s2 + 1));
	else if ((*s1 == '\0') && *s2 != '*')
		return (0);
	else if ((*s2 == '\0') && *s1 != '*')
		return (0);
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (_wildcmp(s1, s2 + 1));
		else
			return (_wildcmp(s1 + 1, s2) || _wildcmp(s1, s2 + 1));
	}
	else
		return (0);
}

/**
 * wildcmp - Check if two strings can be considered identical
 * @s1: The first string
 * @s2: The second string
 * Return: int, 1 if true, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	return (_wildcmp(s1, s2));
}
