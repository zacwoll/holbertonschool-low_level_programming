#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *del;

	while (head)
	{
		del = head;
		head = head->next;
		free(del);
	}
}
