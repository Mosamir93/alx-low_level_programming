#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: head of the list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *p;

	if (!head)
		exit(98);
	p = head;
	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		i++;
		if (p->next >= p)
		{
			printf("-> [%p] %d\n", (void *)p->next, p->n);
			break;
		}
		p = p->next;
	}
	return (i);
}
