#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (!head)
		return;
	while (*head)
	{
		p = p->next;
		free(head);
		*head = p;
	}
	*head = NULL;
}
