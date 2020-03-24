#include "lists.h"

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
