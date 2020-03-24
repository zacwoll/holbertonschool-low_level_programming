#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node at an index
  * @head: head of list
  * @idx: index of node
  * @n: data to put in node
  * Return: listint_t struct
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *one_before;
	unsigned int i;

	if (!head)
		return (NULL);
	one_before = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (one_before)
			one_before = one_before->next;
		else
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = one_before->next;
		one_before->next = new;
	}

	return (new);
}
