#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: tail pointer ofdoubly linked list
 * Return: number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *current;

	current = h;
	for (i = 0; current != NULL; i++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
