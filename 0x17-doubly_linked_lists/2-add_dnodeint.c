#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head pointer of list
 * @n: int to be added in the new node
 * Return: the new node or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->next = *head;
	node->prev = NULL;
	node->n = n;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
