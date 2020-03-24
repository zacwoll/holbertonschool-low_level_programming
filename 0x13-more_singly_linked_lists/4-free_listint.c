#include "lists.h"

/**
  * free_listint - frees a listint
  * @head: head of the list
  */
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
