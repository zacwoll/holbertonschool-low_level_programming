#include "lists.h"

/**
  * add_nodeint - adds a node to front of list
  * @head: head of list
  * @n: data to put in new node
  * Return: listint_t node address
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
