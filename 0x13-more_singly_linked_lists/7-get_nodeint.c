#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node to be returned
 * Return: the nth node or NULL if not present
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (!head)
		return (NULL);
	p = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
			return (p);
		p = p->next;
		if (p == NULL)
			return (NULL);
	}
	return (NULL);
}
