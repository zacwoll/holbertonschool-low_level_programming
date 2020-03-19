#include "lists.h"

/**
  * list_len - returns the count of elements in list_t list
  * @h: pointer to head of list
  * Return: size_t list length
  */
size_t list_len(const list_t *h)
{
	size_t ele_count = 0;

	if (!h)
		return (ele_count);

	while (h)
	{
		ele_count++;
		h = h->next;
	}
	return (ele_count);
}
