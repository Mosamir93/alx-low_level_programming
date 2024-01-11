#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head of the list
 * Return: sum of the of all data in list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

	if (!head)
		return (0);
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
