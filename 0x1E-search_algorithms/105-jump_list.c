#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump search in a singly linked list
 * @list: the list to  be searched
 * @size: size of the list
 * @value: key to search for
 * Return: listint_t *ptr to node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j = sqrt(size), j_prev = 0;
	listint_t *list_prev = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (j_prev = i, list_prev = list; list->next &&
			i < j_prev + j; i++)
		list = list->next;
		printf("Value checked array[%lu] = [%d]\n", i, list->n);
		if (!list->next)
			break;
	}

	printf("Value found between indexes [%lu] = [%lu]\n", j_prev, i);

	for (i = j_prev, list = list_prev; list->next && list->n < value; i++)
	{
		list = list->next;
		printf("Value checked array[%lu] = [%d]\n", i, list->n);
	}

	if (list->n == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, list->n);
		return (list);
	}

	return (NULL);
}
