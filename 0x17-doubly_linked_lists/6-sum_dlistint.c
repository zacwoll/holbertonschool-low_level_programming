#include "lists.h"

/**
 * sum_dlistint - returns sum of data in dlistint_t list
 * @head: head of list
 * Return: int, sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
