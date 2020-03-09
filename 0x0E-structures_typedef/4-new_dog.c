#include "dog.h"
#include <stdlib.h>

/**
  * _strdup - copies a string to new memory
  * @str: string to be copied
  * Return: char *, string on pass, NULL on failure
  */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	p = malloc((i + 1) * sizeof(char));
	if (p == NULL || str == NULL)
	{
		free(p);
		return (NULL);
	}
	for (; i >= 0; i--)
	{
		p[i] = str[i];
	}
	return (p);
}

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
	n_dog->name = _strdup(name);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = _strdup(owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->age = age;
	return (n_dog);
}
