#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;

	if (!head)
		return (0);

	del = *head;
	*head = (*head)->next;
	data = del->n;
	free(del);
	return (data);
}
