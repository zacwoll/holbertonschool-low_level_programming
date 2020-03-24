#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	if (!h)
		return (length);

	while (h)
	{
		h = h->next;
		length++;
	}

	return (length);
}
