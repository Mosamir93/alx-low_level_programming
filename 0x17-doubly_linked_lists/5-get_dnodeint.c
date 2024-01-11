#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer of list
 * @index: index of the returned node
 * Return: node at the index or NULL if not existing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (!head)
		return (NULL);
	curr = head;
	for (i = 0; i < index && curr->next; i++)
		curr = curr->next;
	if (i == index)
		return (curr);
	else
		return (NULL);
}
