#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  * @head: head of list
  * @index: index of node
  * Return: int, data at node
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *del, *one_before;

	if (!head || !(*head))
		return (-1);

	one_before = *head;
	for (i = 1; i < index; i++)
	{
		if (one_before->next)
			one_before = one_before->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		del = one_before;
		*head = one_before->next;
	}
	else
	{
		del = one_before->next;
		one_before->next = del->next;
	}
	free(del);

	return (1);
}
