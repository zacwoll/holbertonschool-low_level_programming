#include "lists.h"

/**
  * find_listint_loop - Floyd's Tortoise and Hare, finds loop in list
  * @head: head of the list
  * Return: listint_t address of loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back, *front;

	if (!head)
		return (NULL);

	back = head
	front = head;
	while (front->next && front->next->next)
	{
		front = front->next->next;
		back = back->next;
		if (front == back)
		{
			back = head;
			while (back != front)
			{
				back = back->next;
				front = front->next;
			}
			return (front);
		}
	}
	return (NULL);
}
