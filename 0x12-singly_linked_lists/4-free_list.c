#include "lists.h"

/**
  * free_list - frees a list_t singly linked list
  * @head: head of list_t list
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *del;

	while (head)
	{
		del = head;
		head = head->next;
		free(del->str);
		free(del);
	}
}
