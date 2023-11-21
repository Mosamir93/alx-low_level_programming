#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head)
	{
		p = p->next;
		free(head);
		head = p;
	}
}
