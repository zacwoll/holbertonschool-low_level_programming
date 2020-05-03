#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head: head of list
 * @index: index of the node, starting from 0
 * Return: the node at index, or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
	{
		head = head->next;
	}
	if (!head)
		return (NULL);

	return (head);
}
