#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns it's data
 * @head: head of the linked list
 * Return: the head's data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;

	p = *head;
	if (!head || !*head)
		return (0);
	i = p->n;
	p = p->next;
	free(*head);
	*head = p;
	return (i);
}
