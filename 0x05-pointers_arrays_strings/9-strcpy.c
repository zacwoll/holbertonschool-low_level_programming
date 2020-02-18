#include "holberton.h"
#include <stdio.h>
/**
  * _strcpy - prints an array, followed by a new line
  * @dest : destination array
  * @src : string to be cpied
  * Return: void
  */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;
	char *s = src;

	for (; *a != 0; a++, s++)
		*a = *s;
	
	return s;
}

int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s|", s1);
    printf("%s", p);
    return (0);
}	
