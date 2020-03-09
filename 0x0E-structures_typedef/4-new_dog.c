#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - init a new dog struct
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: dog_t *
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = strdup(name);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = strdup(owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->age = age;
	return (n_dog);
}
