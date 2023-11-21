#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: the sum of all the data in nodes
 */

int sum_listint(listint_t *head)
{
	int i;

	if (!head)
		return (0);
	i = 0;
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
