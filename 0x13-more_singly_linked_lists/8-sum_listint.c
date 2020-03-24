#include "lists.h"

/**
  * sum_listint - sums a list's data
  * @head: head of list
  * Return: int, sum of list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
