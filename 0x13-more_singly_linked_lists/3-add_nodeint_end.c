#include "lists.h"

/**
  * add_node_end - adds a node to the end of a listint_t list
  * @head: double pointer to head of listint_t
  * @n: int to be put in new node
  * Return: listint_t node object
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (!head)
		return (NULL);
	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}
