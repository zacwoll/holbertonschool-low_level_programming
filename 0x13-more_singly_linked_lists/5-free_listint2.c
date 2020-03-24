#include "lists.h"

/**
  * free_listint2 - frees a listint
  * @head: double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
