#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free a dog
  * @d: pointer to dog struct
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
