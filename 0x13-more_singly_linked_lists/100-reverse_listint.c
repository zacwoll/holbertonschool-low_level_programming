#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	/* prev is the new head, I'd return it but we're using head in main */
	*head = prev;

	return (*head);
}
