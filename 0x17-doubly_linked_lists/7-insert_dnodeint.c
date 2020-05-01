#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: head of list
 * @idx: index of new node
 * @n: data of new node
 * Return: address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int index;

	if (!h)
		return (NULL);
	if (!(*h) && idx != 0)
		return (NULL);
	for (index = 1; index < idx && current; index++)
	{
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		new->prev = NULL;
		new->next = current;
		return (new);
	}
	if (!current && index < idx)
	{
		free(new);
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;
	if (current->next)
		current->next->prev = new;
	current->next = new;

	return (new);
}
