#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head pointer of list
 * @idx: index at which to add the new node
 * @n: int to add in the new node value
 * Return: the new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr, *node;

	if (idx != 0 && !(*h))
		return (NULL);
	if (!(*h) && idx == 0)
		return (add_dnodeint(h, n));
	curr = *h;
	for (i = 0; i < idx && curr; i++)
	{
		curr = curr->next;
	}
	if (i != idx || !curr)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	curr->prev->next = node;
	node->prev = curr->prev;
	curr->prev = node;
	node->next = curr;
	return (node);
}
