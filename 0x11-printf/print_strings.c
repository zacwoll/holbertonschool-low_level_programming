#include "holberton.h"

/**
  * print_S - print Strings, replace Hex
  * @ag: variadic list
  * Return: char *
  */
char *print_S(va_list ag)
{
	char *s = va_arg(ag, char *);
	char *t;
	char *hex;
	int i, j, hex_count = 0, debug = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] > 128)
		{
			hex_count++;
		}
	}

	t = malloc(sizeof(char) * (i + hex_count * 3 + 1));

	for (i = 0, j = 0; s[i]; i++, j++)
	{
		if (s[i] < 32 || s[i] > 128)
		{
			t[j++] = '\\';
			t[j++] = 'x';
			hex = convert_to_hex(s[i]);
			if (s[i] < 16)
			{
				t[j++] = '0';
			}
			while (*hex)
			{
				t[j++] = *hex++;
			}
			j--;
		}
		else
			t[j] = s[i];
	}
	return (t);
}

/**
  * print_s - prints strings
  * @ag: variadic list
  * Return: char *
  */
char *print_s(va_list ag)
{
	char *s = va_arg(ag, char *);

	return (s);
}
