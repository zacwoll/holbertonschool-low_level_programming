#include "holberton.h"
/**
  * _strlen_recursion - returns the length of a string
  * @s: char pointer to string
  * Return: int length
  */

int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s++)
	{
		total += _strlen_recursion(s) + 1;
	}
	return (total);
}

int is_pal(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_pal(s, ++start, --end));
}
/**
  * is_palindrome - determines if string is palindrome
  * @s: string to be checked
  * Return: int, 1 if true 0 if false
  */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	
	if (!(*s))
		return (1);
	return (is_pal(s, 0, i - 1));
}
