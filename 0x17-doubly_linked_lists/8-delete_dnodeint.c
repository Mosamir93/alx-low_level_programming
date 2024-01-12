#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head pointer of list
 * @index: index at which to delete the node
 * Return: 1 on succes and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr, *temp;

	if (!(*head))
		return (-1);
	curr = *head;
	for (i = 0; i < index && curr; i++)
		curr = curr->next;
	if (i != index)
		return (-1);
	if (!(curr->next))
	{
		if (curr->prev)
			curr->prev->next = NULL;
		else
			*head = NULL;
		free(curr);
		return (1);
	}
	if (index == 0 && curr)
	{
		*head = curr->next;
		(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	temp = curr->prev;
	curr->next->prev = temp;
	curr->prev->next = curr->next;
	free(curr);
	return (1);
}
