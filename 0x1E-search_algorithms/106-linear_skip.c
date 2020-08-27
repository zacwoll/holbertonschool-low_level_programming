#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of ints
 * @list: sorted skip list of ints
 * @value: key to search for
 * Return: skiplist_t *ptr to node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *list_prev = list;

	if (!list)
		return (NULL);

	for (; list->n < value && list->express; list_prev = list,
		list = list->express)
	printf("Value checked array[%lu] = [%d]\n", list->index,
		list->n);

	printf("Value found between indexes [%lu] = [%lu]\n", list_prev->index,
		list->index);

	for (list = list_prev; list->next && list->n < value; list = list->next)
		printf("Value checked array[%lu] = [%d]\n", list->index,
		list->n);

	if (list->n == value)
	{
		printf("Value checked array[%lu] = [%d]\n", list->index,
			list->n);
		return (list);
	}

	return (NULL);
}
