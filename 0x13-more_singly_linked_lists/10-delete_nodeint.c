#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of linked list
 * @head: head of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if deleted successfuly or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p, *temp;

	p = *head;
	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	for (i = 0; i <= index; i++)
	{
		if (!p && i < index)
			return (-1);
		if (i == index)
		{
			temp->next = p->next;
			free(p);
			return (1);
		}
		temp = p;
		p = p->next;
	}
	return (-1);
}
