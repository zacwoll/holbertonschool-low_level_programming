#include "dog.h"
#include <stdio.h>

/**
  * print_dog - print a dog
  * @d: pointer to dog struct
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("Age: %0.6f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner = %s\n", d->owner);
}
