#include "lists.h"

/**
 * _r - allocates memory for nodes' array of pointers
 * @list: the earlier lis
 * @size: the ne list's size
 * @new: node to be added to list
 * Return: new list's pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: head of the list
 * Return: number of nodes
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}

		}
		count++;
		list = _r(list, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
