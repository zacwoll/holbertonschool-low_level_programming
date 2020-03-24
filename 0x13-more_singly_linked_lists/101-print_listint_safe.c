#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (!head)
		return (count);

	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		count++;
		
		if (head < head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *) head, head->n);
			exit(98);
		}
		else
			head = head->next;
	}
}
