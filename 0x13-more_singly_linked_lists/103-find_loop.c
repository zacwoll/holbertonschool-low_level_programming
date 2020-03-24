#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	if (!head)
		return (NULL);

	while (head)
	{
		if (head < head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *) head, head->n);
			return (head);
		}
		else
			head = head->next;
	}
}
