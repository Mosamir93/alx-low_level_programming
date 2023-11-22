#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the linked list
 * Return: address of the node where loop starts or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	if (head == NULL)
		return (NULL);
	for (p2 = head->next; p2 != NULL; p2 = p2->next)
	{
		if (p2 == p2->next)
			return (p2);
		for (p1 = head; p1 != p2; p1 = p1->next)
			if (p1 == p2->next)
				return (p2->next);
	}
	return (NULL);
}
