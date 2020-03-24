#include "lists.h"

/**
  * print_listint - prints a linked list containing ints
  * @h: head of list
  * Return: count
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
