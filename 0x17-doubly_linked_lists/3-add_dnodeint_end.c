#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head pointer of list
 * @n: int to add to new node
 * Return: new node or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *end;

	if (!node)
		return (NULL);
	if (*head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = node;
		node->prev = end;
	}
	node->next = NULL;
	node->n = n;
	if (!(*head))
	{
		*head = node;
		node->prev = NULL;
	}
	return (node);
}
