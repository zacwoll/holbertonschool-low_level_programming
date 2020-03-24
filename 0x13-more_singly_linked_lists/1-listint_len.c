#include "lists.h"

/**
  * listint_len - returns the size of the list
  * @h: head of list
  * Return: size_t of list
  */
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
