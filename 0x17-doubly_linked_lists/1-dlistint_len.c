#include "lists.h"

/**
 * dlistint_len - returns the length of a linked dlistint_t list
 * @h: the list
 *
 * Return: size_t nodecount
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
