#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *del;

	if (!h || !*h)
		return (count);

	while (*h)
	{
		count++;

		if (*h > (*h)->next)
		{
			del = *h;
			*h = (*h)->next;
			free(del);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;

	return (count);
}
