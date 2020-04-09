#include "protos.h"
/**
  * *_strcpy - copies the string pointed
  *to by src, including the terminating null byte
  *to the buffer pointed to by dest
  * @dest: points to buffer
  * @src: points to string
  *
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	char *answer = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
return (answer);
}
/**
  * *_strcat - a function to concatenate 2 strings
  * @dest: what we are apprending to
  * @src: the string we are appending from
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
return (begin);
}
