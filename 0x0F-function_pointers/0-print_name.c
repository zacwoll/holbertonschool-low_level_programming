#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: name to be printed
  * @f: pointer to function that prints name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
