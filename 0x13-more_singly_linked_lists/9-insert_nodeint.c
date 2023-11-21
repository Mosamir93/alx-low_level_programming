#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index where the new node should be added
 * @n: the valuse of n in the new node
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new;
	unsigned int i;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (!head)
	{
		free(new);
		return (NULL);
	}
	p = *head;
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = p;
		p = new;
		return (new);
	}
	for (i = 0; i <= idx; i++)
	{
		if (p == NULL && i + 1 != idx)
		{
			free(new);
			return (NULL);
		}
		if (i + 1 == idx)
		{
			new->next = p->next;
			p->next = new;
			return (new);
		}
		p = p->next;
	}
	free(new);
	return (NULL);
}
