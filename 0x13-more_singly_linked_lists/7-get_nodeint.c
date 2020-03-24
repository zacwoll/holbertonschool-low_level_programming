#include "lists.h"

/**
  * get_nodeint_at_index - returns a node at an index
  * @head: head of list
  * @index: index of node
  * Return: listint_t struct
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* listint_t *ret_node; */
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
