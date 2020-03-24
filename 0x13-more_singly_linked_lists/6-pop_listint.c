#include "lists.h"

/**
  * pop_listint - remove head of list and return it
  * @head: head of list
  * Return: int, data in removed node
  */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;

	if (!head || !*head)
		return (0);

	del = *head;
	*head = (*head)->next;
	data = del->n;
	free(del);
	return (data);
}
