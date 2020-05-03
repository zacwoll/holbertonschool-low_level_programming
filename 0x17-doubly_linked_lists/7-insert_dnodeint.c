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
	dlistint_t *curr = *h;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			curr->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = curr;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = curr;
	new->next = curr->next;
	if (curr->next)
		curr->next->prev = new;
	curr->next = new;
	return (new);
}
