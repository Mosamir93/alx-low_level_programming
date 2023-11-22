#include "lists.h"

/**
 * _find_loop - detects the loop at the meeting point
 * @head: head of the list
 * Return: meeting point of the loop
 */
listint_t *_find_loop(listint_t *head)
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
/**
 * free_listint_safe - frees a listint_t list
 * @h: head of the linked list
 * Return: number of nodes or 0 on failure
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size;
	int flag;
	listint_t *p1, *p2;

	if (!h || !*h)
		return (0);
	p1 = _find_loop(*h);
	for (size = 0; (*h != p1 || flag) && *h; *h = p2)
	{
		size++;
		p2 = (*h)->next;
		if (*h == p1 && flag)
		{
			if (p1 == p1->next)
			{
				free(*h);
				break;
			}
			size++;
			p2 = p2->next;
			free((*h)->next);
			flag = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (size);
}
