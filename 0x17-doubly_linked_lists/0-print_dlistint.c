#include "lists.h"

/**
 * print_dlistint - print the data of dlistint_t list
 * @h: The list
 *
 * Return: size_t node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
