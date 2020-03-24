#include "lists.h"

/**
  * find_listint_loop - finds where it loops in the list if it does
  * @head: head of the list
  * Return: listint_t address of loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	if (!head)
		return (NULL);

	while (head)
	{
		if (head < head->next)
		{
			head = head->next;
			return (head);
		}
		else
			head = head->next;
	}

	return (NULL);
}
